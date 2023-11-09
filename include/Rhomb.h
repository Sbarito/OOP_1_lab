#pragma once

#include "Figure.h"
#include "ValidateRhomb.h"

class Rhomb : public Figure {
public:
    Rhomb() = default;
    Rhomb(Vector<Point> peaks);
    static Rhomb CreateRhomb(Vector<Point> peaks);
    operator double() const override;
    ~Rhomb() = default;
};
