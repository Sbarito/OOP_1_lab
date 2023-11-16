#include "Trapezoid.h"

template<typename T>
Trapezoid<T>::Trapezoid(Vector<Point<T>> peaks) {
    points = peaks;
    size = peaks.size();
}

template<typename T>
Trapezoid<T>& Trapezoid<T>::CreateTrapezoid(Vector<Point<T>> peaks) {
    ValidateFigure<T>::Validate(typeid(Trapezoid), peaks);
    Trapezoid<T> trapezoid(peaks);
    return trapezoid;
}

template<typename T>
Trapezoid<T>::operator double() const {
    Vector<Point<T>> points = GetArray();
    return (abs(points[1].getX() - points[0].getX()) + abs(points[2].getX() - points[3].getX())) / 2 * abs(points[0].getY() - points[3].getY());
}
