#include "Trapezoid.h"

Trapezoid::Trapezoid(Vector<Point> peaks) {
    points = peaks;
    size = peaks.size();
}

Trapezoid Trapezoid::CreateTrapezoid(Vector<Point> peaks) {
    ValidateTrapezoid::TrapezoidValidate(peaks);
    return Trapezoid(peaks);
}

Trapezoid::operator double() const {
    Vector<Point> points = GetArray();
    return (abs(points[1].getX() - points[0].getX()) + abs(points[2].getX() - points[3].getX())) / 2 * abs(points[0].getY() - points[3].getY());
}
