#include "Point.h"

Point::Point()=default;

Point::Point(double x, double y) {
    double coordinate_x = x;
    double coordinate_y = y;
}

Point Point::operator+(Point &right) const {
    return *(new Point((this->coordinate_x + right.coordinate_x), (this->coordinate_y + right.coordinate_y)));
}

Point &Point::operator-(const Point &right) const {
    return *(new Point((this->coordinate_x - right.coordinate_x), (this->coordinate_y - right.coordinate_y)));
}

Point& Point::operator=(Point const &right){
    this->coordinate_x = right.coordinate_x;
    this->coordinate_y = right.coordinate_y;
    return *this;
}

bool Point::operator==(const Point &right) const {
    if (this->coordinate_x == right.coordinate_x && this->coordinate_y == right.coordinate_y){
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &out, const Point &point) {
    out << "x: " << point.coordinate_x << " y: " << point.coordinate_y;
    return out;
}

std::istream operator>>(std::istream &is, Point &point) {
    std::cout << "enter x:" << std::endl;
    is >> point.coordinate_x;
    std::cout << "enter y:" << std::endl;
    is >> point.coordinate_y;
    return std::istream(nullptr);
}

double Point::getX() const {
    return coordinate_x;
}

double Point::getY() const {
    return coordinate_y;
}