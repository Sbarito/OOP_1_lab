#pragma once

#include "Point.h"
#include "Vector.h"

class Figure {
protected:
    Vector<Point> points;
    int size;
public:
    Figure() = default;
    Figure(Vector<Point> peaks);
    Vector<Point> GetArray() const;
    Point center() const;
    friend std::ostream& operator<<(std::ostream& os, const Figure& figure);
    friend std::istream& operator>>(std::istream& is, Figure& figure);
    Figure(const Figure& other);
    Figure& operator=(const Figure& other);
    Figure& operator=(Figure&& other) noexcept;
    virtual operator double() const = 0;
    bool operator==(const Figure& other) const;
    ~Figure() = default;
};
