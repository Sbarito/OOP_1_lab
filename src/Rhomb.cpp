#include "Rhomb.h"

template<typename T>
Rhomb<T>::Rhomb(Vector<Point<T>> peaks) {
    points = peaks;
    size = peaks.size();
}

template<typename T>
Rhomb<T>& Rhomb<T>::CreateRhomb(Vector<Point<T>> peaks) {
    ValidateFigure<T>::Validate(typeid(Rhomb), peaks);
    Rhomb<T> rhomb(peaks);
    return rhomb;
}

template<typename T>
Rhomb<T>::operator double() const {
    Vector<Point<T>> points = GetArray();
    return abs(points[0].getY() - points[2].getY()) * abs(points[1].getX() - points[3].getX()) / 2;
}
