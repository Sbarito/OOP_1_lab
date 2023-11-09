#pragma once
#include <iostream>
#include "Vector.h"
#include "Point.h"

class ValidateFigure {
    public:
        virtual bool Validate(Vector <Point> peaks) = 0;
};