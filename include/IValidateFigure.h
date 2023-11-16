
#pragma once
#include "iostream"
#include "Vector.h"
#include "Point.h"

template<typename T>
class IValidateFigure{
public:
    virtual void validateFigure(Vector<Point<T>> peaks) = 0;

    virtual bool isAllowedForType(const std::type_info& typeInfo) = 0;
};