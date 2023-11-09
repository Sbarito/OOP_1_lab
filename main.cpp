#include "Vector.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include "Figure.h"
#include "ValidateTrapezoid.h"
#include "ValidateRhomb.h"
#include "ValidatePentagon.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include "Pentagon.h"

int main() {
    system("chcp 65001");

    Figure** figures = new Figure*[3];

    Vector<Point> trapezoidPoints;
    trapezoidPoints.push_back(Point(2, 4));
    trapezoidPoints.push_back(Point(6, 4));
    trapezoidPoints.push_back(Point(8, 0));
    trapezoidPoints.push_back(Point(0, 0));
    //Trapezoid ds = Trapezoid::CreateTrapezoid(trapezoidPoints);
    Trapezoid* trapezoid = new Trapezoid(trapezoidPoints);
    figures[0] = trapezoid;

    Vector<Point> pentagonPoints;
    trapezoidPoints.push_back(Point(1, 3));
    trapezoidPoints.push_back(Point(2, 9));
    trapezoidPoints.push_back(Point(20, 0));
    trapezoidPoints.push_back(Point(1, 0));
    Pentagon* pentagon = new Pentagon(trapezoidPoints);
    figures[1] = pentagon;

    std::cout << "Введите кол-во вершин: ";
    Rhomb* rhomb = new Rhomb();
    std::cin >> *rhomb;
    figures[2] = rhomb;

    double area = 0;
    for (int i = 0; i < 3; i++) {
        Point center = figures[i]->center();
        std::cout << center << " ";
        std::cout << static_cast<double>(*figures[i]) << std::endl;
        area = area + static_cast<double>(*figures[i]);
    }
    std::cout << "Общая площадь: ";
    std::cout << area;

    for (int i = 0; i < 1; i++) {
        delete figures[i];
    }
    delete[] figures;

    return 0;
}

