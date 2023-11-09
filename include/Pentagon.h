#pragma once

#include "Figure.h"
#include "ValidatePentagon.h"

class Pentagon : public Figure {
public:
    Pentagon() = default;
    Pentagon(Vector<Point> peaks);
    static Pentagon CreatePentagon(Vector<Point> peaks);
    operator double() const override;
    ~Pentagon() = default;
};
