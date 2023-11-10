#include "ValidateTrapezoid.h"

bool ValidateTrapezoid::Validate(Vector<Point> peaks) {
    if (peaks.size() != 4) {
        throw "Некорректный трапезоид (не то количество вершин)";
    }
    if ((peaks[0].getY() - peaks[3].getY()) != (peaks[1].getY() - peaks[2].getY())) {
        throw "Некорректный трапезоид (стороны не параллельны)";
    }
    if ((peaks[0].getX() - peaks[3].getX()) != (peaks[2].getX() - peaks[1].getX())) {
        throw "Некорректный трапезоид (трапеция неравнобедренная)";
    }
    return true;
}

bool ValidateTrapezoid::TrapezoidValidate(Vector<Point> peaks) {
    ValidateTrapezoid validator;
    return validator.Validate(peaks);
}
