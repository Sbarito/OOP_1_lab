#pragma once

#include "ValidateFigure.h"
#include "Trapezoid.h"

class ValidateTrapezoid : public ValidateFigure {
public:
    bool Validate(Vector<Point> peaks) override;
    static bool TrapezoidValidate(Vector<Point> peaks);
};
