
#pragma once
#include "IValidateFigure.h"

template<typename T>
class ValidateRhomb : public IValidateFigure<T>{
public:

    ValidateRhomb() = default;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    bool validateFigure(Vector<Point<T>> peaks) override;

    ~ValidateRhomb() = default;
};