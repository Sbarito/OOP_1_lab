#include <iostream>
#pragma once


class Point {
private:
    double x;
    double y;
public:
    Point() = default;
    Point(double x0, double y0);
    double getX() const;
    double getY() const;
    friend std::ostream& operator<<(std::ostream& out, const Point& point);
    friend std::istream& operator>>(std::istream& is, Point& point);
    bool operator!=(const Point& other) const;
    ~Point() = default;
};

