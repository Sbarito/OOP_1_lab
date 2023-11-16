#include "Figure.h"
#include "Point.h"

template<typename T>
Figure<T>::Figure(Vector<Point<T>> peaks) {
    points = peaks;
    size = peaks.size();
}

template<typename T>
Vector<Point<T>> Figure<T>::GetArray() const {
    return points;
}

template<typename T>
Point<T> Figure<T>::center() const {
    T sum_x = 0;
    T sum_y = 0;
    for (int index = 0; index < size; ++index) {
        sum_x += points[index].getX();
        sum_y += points[index].getY();
    }
    return Point<T>(sum_x / size, sum_y / size);
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Figure<T>& figure) {
    for (int i = 0; i < figure.size; i++) {
        os << i + 1 << " вершина " << figure.points[i] << "; ";
    }
    return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, Figure<T>& figure) {
    figure.points.clear();
    is >> figure.size;
    std::cout << std::endl;
    for (int i = 0; i < figure.size; ++i) {
        std::cout << i + 1 << " вершина:" << std::endl;
        Point<T> point;
        is >> point;
        figure.points.push_back(point);
    }
    return is;
}

template<typename T>
Figure<T>::Figure(const Figure<T>& other) {
    points = other.points;
    size = other.size;
}

template<typename T>
Figure<T>& Figure<T>::operator=(const Figure<T>& other) {
    if (this != &other) {
        points = other.points;
        size = other.size;
    }
    return *this;
}

template<typename T>
Figure<T>& Figure<T>::operator=(Figure<T>&& other) noexcept {
    if (this != &other) {
        points = std::move(other.points);
        size = other.size;
    }
    return *this;
}

template<typename T>
bool Figure<T>::operator==(const Figure<T>& other) const {
    return points == other.points && size == other.size;
}
