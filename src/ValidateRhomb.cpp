#include "ValidateRhomb.h"
#include "Rhomb.h"

template<typename T>
bool ValidateRhomb<T>::isAllowedForType(const std::type_info &typeInfo) {
    return typeid(Rhomb<T>) == typeInfo;
}

template<typename T>
bool ValidateRhomb<T>::validateFigure(Vector<Point<T>> peaks) {
    if (peaks.size() != 4) {
        throw "Некорректный ромб (не то количество вершин)";
    }
    if ((peaks[0].getY() - peaks[3].getY()) != (peaks[1].getY() - peaks[2].getY()) || (peaks[0].getX() - peaks[3].getX()) != (peaks[1].getX() - peaks[2].getX())) {
        throw "Некорректный ромб (стороны не параллельны и не равны)";
    }
    if ((peaks[0].getY() - peaks[1].getY()) != (peaks[3].getY() - peaks[2].getY()) || (peaks[1].getX() - peaks[0].getX()) != (peaks[2].getX() - peaks[3].getX())) {
        throw "Некорректный ромб (стороны не параллельны и не равны)";
    }
    return true;
}
