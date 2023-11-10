#include "Figure.h"
#include "Point.h"

Figure::Figure(Vector<Point> peaks) {
    points = peaks;
    size = peaks.size();
}

Vector<Point> Figure::GetArray() const {
    return points;
}

Point Figure::center() const {
    double sum_x = 0;
    double sum_y = 0;
    for (int index = 0; index < size; ++index) {
        sum_x += points[index].getX();
        sum_y += points[index].getY();
    }
    return Point(sum_x / size, sum_y / size);
}

std::ostream& operator<<(std::ostream& os, const Figure& figure) {
    for (int i = 0; i < figure.size; i++) {
        os << i + 1 << " вершина " << figure.points[i] << "; ";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Figure& figure) {
    figure.points.clear();
    is >> figure.size;
    std::cout << std::endl;
    for (int i = 0; i < figure.size; ++i) {
        std::cout << i + 1 << " вершина:" << std::endl;
        Point point;
        is >> point;
        figure.points.push_back(point);
    }
    return is;
}

Figure::Figure(const Figure& other) {
    points = other.points;
    size = other.size;
}

Figure& Figure::operator=(const Figure& other) {
    if (this != &other) {
        points = other.points;
        size = other.size;
    }
    return *this;
}

Figure& Figure::operator=(Figure&& other) noexcept {
    if (this != &other) {
        points = std::move(other.points);
        size = other.size;
    }
    return *this;
}

bool Figure::operator==(const Figure& other) const {
    return points == other.points && size == other.size;
}
