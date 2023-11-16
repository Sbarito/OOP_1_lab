#pragma once

#include "Point.h"
#include "Vector.h"
#include "ValidateFigure.h"

template<typename T>
class Figure {
protected:
    Vector<Point<T>> points;
    int size;
public:
    Figure() = default;

    Figure(Vector<Point<T>> peaks);

    Vector<Point<T>> GetArray() const;

    Point<T> center() const;

    friend std::ostream& operator<<(std::ostream& os, const Figure& figure);

    friend std::istream& operator>>(std::istream& is, Figure& figure);

    Figure(const Figure& other);

    Figure& operator=(const Figure& other);

    Figure& operator=(Figure&& other) noexcept;

    virtual operator double() const = 0;

    bool operator==(const Figure& other) const;

    ~Figure() = default;
};

