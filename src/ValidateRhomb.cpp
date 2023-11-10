#include "ValidateRhomb.h"

bool ValidateRhomb::Validate(Vector<Point> peaks) {
    if (peaks.size() != 4) {
        throw "Некорректный ромб (не то количество вершин)";
    }
    if (((peaks[0].getY() - peaks[3].getY()) != (peaks[1].getY() - peaks[2].getY())) || ((peaks[0].getX() - peaks[3].getX()) != (peaks[1].getX() - peaks[2].getX()))) {
        throw "Некорректный ромб (не то количество вершин)";
    }

    if ((peaks[0].getY() - peaks[1].getY()) != (peaks[3].getY() - peaks[2].getY()) || (peaks[1].getX() - peaks[0].getX()) != (peaks[2].getX() - peaks[3].getX())) {
        throw "Некорректный ромб (стороны не параллельны и не равны)";
    }
    return true;
}

bool ValidateRhomb::RhombValidate(Vector<Point> peaks) {
    ValidateRhomb validator;
    return validator.Validate(peaks);
}
