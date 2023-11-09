#include "ValidatePentagon.h"

bool ValidatePentagon::Validate(Vector<Point> peaks) {
    if (peaks.size() != 5) {
        throw "Некорректный пентагон (не то количество вершин)";
    }
    if ((peaks[0].getY() - peaks[4].getY()) != (peaks[0].getY() - peaks[1].getY())) {
        throw "Некорректный пентагон (стороны не равны)";
    }
    if ((peaks[0].getX() - peaks[4].getX()) != (peaks[1].getX() - peaks[0].getX())) {
        throw "Некорректный пентагон (стороны не равны)";
    }
    if ((peaks[1].getX() - peaks[2].getX()) != (peaks[3].getX() - peaks[4].getX())) {
        throw "Некорректный пентагон (стороны не равны)";
    }
    if ((peaks[1].getY() - peaks[2].getY()) != (peaks[4].getX() - peaks[3].getX())) {
        throw "Некорректный пентагон (стороны не равны)";
    }
    return true;
}

bool ValidatePentagon::PentagonValidate(Vector<Point> peaks) {
    ValidatePentagon validator;
    return validator.Validate(peaks);
}
