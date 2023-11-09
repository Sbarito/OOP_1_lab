#include "Point.h"

Point::Point(double x0, double y0) {
    x = x0;
    y = y0;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

std::istream& operator>>(std::istream& is, Point& point) {
    std::cout << "Введите значение x: ";
    is >> point.x;
    std::cout << "Введите значение y: ";
    is >> point.y;
    std::cout << std::endl;
    return is;
}

bool Point::operator!=(const Point& other) const {
    return x != other.x || y != other.y;
}
