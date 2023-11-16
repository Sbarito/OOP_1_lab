#pragma once

#include "Figure.h"

template<typename T>
class Pentagon : public Figure<T> {
public:
    using Figure<T>::size;
    using Figure<T>::points;

    Pentagon() = default;

    Pentagon(Vector<Point<T>> peaks);

    static Pentagon& CreatePentagon(Vector<Point<T>> peaks);

    operator double() const override;

    ~Pentagon() = default;
};
