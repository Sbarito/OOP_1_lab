#pragma once

#include "Figure.h"
#include "ValidateTrapezoid.h"

class Trapezoid : public Figure {
public:
    Trapezoid() = default;
    Trapezoid(Vector<Point> peaks);
    static Trapezoid CreateTrapezoid(Vector<Point> peaks);
    operator double() const override;
    ~Trapezoid() = default;
};

