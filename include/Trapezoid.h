#pragma once

#include "Figure.h"

template<typename T>
class Trapezoid : public Figure<T> {
public:
    using Figure<T>::size;
    using Figure<T>::points;

    Trapezoid() = default;

    Trapezoid(Vector<Point<T>> peaks);

    static Trapezoid& CreateTrapezoid(Vector<Point<T>> peaks);

    operator double() const override;

    ~Trapezoid() = default;
};
