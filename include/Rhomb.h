#pragma once

#include "Figure.h"

template<typename T>
class Rhomb : public Figure<T> {
public:
    using Figure<T>::size;
    using Figure<T>::points;

    Rhomb() = default;

    Rhomb(Vector<Point<T>> peaks);

    static Rhomb& CreateRhomb(Vector<Point<T>> peaks);

    operator double() const override;

    ~Rhomb() = default;
};

