#include "Rhomb.h"

Rhomb::Rhomb(Vector<Point> peaks) {
    points = peaks;
    size = peaks.size();
}

Rhomb Rhomb::CreateRhomb(Vector<Point> peaks) {
    ValidateRhomb::RhombValidate(peaks);
    return Rhomb(peaks);
}

Rhomb::operator double() const {
    Vector<Point> points = GetArray();
    return abs(points[0].getY() - points[2].getY()) * abs(points[1].getX() - points[3].getX()) / 2;
}
