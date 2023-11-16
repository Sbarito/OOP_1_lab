
#pragma once
#include "IValidateFigure.h"

template<typename T>
class ValidatePentagon : public IValidateFigure<T>{
public:

    ValidatePentagon() = default;

    bool isAllowedForType(const std::type_info& typeInfo) override;

    bool validateFigure(Vector<Point<T>> peaks) override;

    ~ValidatePentagon() = default;
};