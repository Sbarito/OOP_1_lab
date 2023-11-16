#include "Pentagon.h"

template<typename T>
Pentagon<T>::Pentagon(Vector<Point<T>> peaks) {
    points = peaks;
    size = peaks.size();
}

template<typename T>
Pentagon<T>& Pentagon<T>::CreatePentagon(Vector<Point<T>> peaks) {
    ValidateFigure<T>::Validate(typeid(Pentagon), peaks);
    Pentagon<T> pentagon(peaks);
    return pentagon;
}

template<typename T>
Pentagon<T>::operator double() const {
    Vector<Point<T>> points = GetArray();
    return abs((this->center()).getY() - points[2].getY()) * abs(points[2].getX() - points[3].getX()) / 2 * 5;
}
