#include "Point.h"

template<typename T>
Point<T>::Point(T x0, T y0) {
    x = x0;
    y = y0;
}

template<typename T>
T Point<T>::getX() const {
    return x;
}

template<typename T>
T Point<T>::getY() const {
    return y;
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const Point<T>& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

template<typename T>
std::istream& operator>>(std::istream& is, Point<T>& point) {
    std::cout << "Введите значение x: ";
    is >> point.x;
    std::cout << "Введите значение y: ";
    is >> point.y;
    std::cout << std::endl;
    return is;
}

template<typename T>
bool Point<T>::operator!=(const Point<T>& other) const {
    return x != other.x || y != other.y;
}
