#pragma once

#include "ValidateFigure.h"
#include "Rhomb.h"

class ValidateRhomb : public ValidateFigure {
public:
    bool Validate(Vector<Point> peaks) override;
    static bool RhombValidate(Vector<Point> peaks);
};
