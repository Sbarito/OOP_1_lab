#pragma once

#include "ValidateFigure.h"
#include "Pentagon.h"

class ValidatePentagon : public ValidateFigure {
public:
    bool Validate(Vector<Point> peaks) override;
    static bool PentagonValidate(Vector<Point> peaks);
};
