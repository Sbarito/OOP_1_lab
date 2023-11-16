#pragma once
#include "IValidateFigure.h"
#include "ValidatePentagon.h"
#include "ValidateRhomb.h"
#include "ValidateTrapezoid.h"


template<class T>
class ValidateFigure{
    static Vector<IValidateFigure<T>> _validators;

public:
    static void Validate(const std::type_info &, Vector<Point<T>>);
};