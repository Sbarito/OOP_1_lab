#include "ValidateTrapezoid.h"
#include "Trapezoid.h"

template<typename T>
bool ValidateTrapezoid<T>::isAllowedForType(const std::type_info &typeInfo) {
    return typeid(Trapezoid<T>) == typeInfo;
}

template<typename T>
bool ValidateTrapezoid<T>::validateFigure(Vector<Point<T>> peaks) {
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