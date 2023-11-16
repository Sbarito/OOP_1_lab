
#pragma once
#include "IValidateFigure.h"

template<typename T>
class ValidateTrapezoid : public IValidateFigure<T>{
public:
    ValidateTrapezoid() = default;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    bool validateFigure(Vector<Point<T>> peaks) override;

    ~ValidateTrapezoid() = default;
};