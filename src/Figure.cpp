#include "Figure.h"
#include "Vector.h"
//#include "Rhomb.h"
//#include "Trapezoid.h"

Figure::Figure() = default;

Figure::Figure(Vector<Point> peaks) {
    Vector<Point> peaks_array = peaks;
    double size_peaks_array = peaks_array.size();
}

Point Figure::centerOfRounding() {
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int index = 0; index < size_peaks_array; ++index) {
        sum_x += peaks_array[index].getX();
        sum_y += peaks_array[index].getY();
    }
    return *new Point(sum_x /size_peaks_array, sum_y /size_peaks_array);
}

std::ostream &operator<<(std::ostream &out, Figure * baseFigure) {
    for (int indexOfPeak = 0; indexOfPeak < Figure->size_peaks_array; ++indexOfPeak) {
        out << "peak: " << indexOfPeak << " {" << Figure->peaks_array[index] << "}" << std::endl;
    }
    return out;
}

Figure::~Figure() = default;