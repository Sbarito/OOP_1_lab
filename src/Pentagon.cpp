#include "Pentagon.h"

Pentagon::Pentagon(Vector<Point> peaks) {
    points = peaks;
    size = peaks.size();
}

Pentagon Pentagon::CreatePentagon(Vector<Point> peaks) {
    ValidatePentagon::PentagonValidate(peaks);
    return Pentagon(peaks);
}

Pentagon::operator double() const {
    Vector<Point> points = GetArray();
    return abs((this->center()).getY() - points[2].getY()) * abs(points[2].getX() - points[3].getX()) / 2 * 5;
}
