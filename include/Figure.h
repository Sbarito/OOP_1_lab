#pragma once
#include "iostream"
#include "Point.h"
#include "Vector.h"
//#include "FigureValidator.h"
class Figure {
public:
    Figure() = default;

    Figure(Vector<Point> peaks);

    Point centerOfRounding();

    friend std::ostream& operator<<(std::ostream& out, Figure*);

    ~Figure();
};