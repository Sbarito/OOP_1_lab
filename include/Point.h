#pragma once
#include <iostream>

template<typename T>
class Point {
private:
    T x;
    T y;
public:
    Point() = default;

    Point(T x0, T y0);

    T getX() const;

    T getY() const;

    friend std::ostream& operator<<(std::ostream& out, const Point& point);

    friend std::istream& operator>>(std::istream& is, Point& point);

    bool operator!=(const Point& other) const;

    ~Point() = default;
};

