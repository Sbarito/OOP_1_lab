#include "Point.h"
#include "Trapezoid.h"
#include "Rhomb.h"
#include "Pentagon.h"
#include "Figure.h"
#include "Vector.h"
#include <gtest/gtest.h>
#include <stdexcept>


// ================================================================================= //

TEST(Point, getY) {
  // arrange 
  Point<double> point(3, 9);

  // act
  double y = point.getY();

  // assert
  ASSERT_EQ(y, 9);
}

TEST(Point, getX) {
  // arrange 
  Point<double> point(3, 9);

  // act
  double x = point.getX();

  // assert
  ASSERT_EQ(x, 3);
}

TEST(Point, notEqual) {
  // arrange 
  Point<double> point(3, 9);

  // act
  double x = point.getX();
  double y = point.getY();

  // assert
  ASSERT_NE(x, y);
}

// ================================================================================= //

TEST(Figure, getArray) {
  // arrange 
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 0));
  array.push_back(Point<double>(2, 8));
  Figure<double> figure(array);

  // act
  Vector <Point<double>> arraySecond = figure.getArray();

  // assert
  ASSERT_EQ(arraySecond, {Point<double>(1, 0), Point<double>(2, 8)});
}

TEST(Figure, center) {
  // arrange 
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 0));
  array.push_back(Point<double>(2, 8));
  Figure<double> figure(array);

  // act
  Point<double> center = figure.center();

  // assert
  ASSERT_EQ(center, Point<double>(1.5, 4));
}

TEST(Figure, comparison) {
  // arrange 
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 0));
  array.push_back(Point<double>(2, 8));
  Figure<double> figure(array);
  Figure<double> secondFigure(array);

  // act
  bool comparison = (figure == secondFigure);

  // assert
  ASSERT_EQ(comparison, true);
}

// ================================================================================= //

TEST(Pentagon, area) {
  // arrange 
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 0));
  array.push_back(Point<double>(2, 10));
  array.push_back(Point<double>(7, 0));
  array.push_back(Point<double>(0, 0));
  array.push_back(Point<double>(0, 5));
  Pentagon<double> figure(array);

  // arrange 
  double area = static_cast<double>(figure);

  // assert
  ASSERT_EQ(area, 52.5);
}

// ================================================================================= //

TEST(Rhomb, area) {
  // arrange 
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 5));
  array.push_back(Point<double>(2, 8));
  array.push_back(Point<double>(7, 0));
  array.push_back(Point<double>(0, 8));
  Rhomb<double> figure(array);

  // arrange 
  double area = static_cast<double>(figure);

  // assert
  ASSERT_EQ(area, 5);
}

// ================================================================================= //

TEST(Trapezoid, area) {
  
  // arrange
  Vector <Point<double>> array;
  array.push_back(Point<double>(1, 0));
  array.push_back(Point<double>(2, 8));
  array.push_back(Point<double>(7, 0));
  array.push_back(Point<double>(0, 8));
  Trapezoid<double> figure(array);
   
  // arrange 
  double area = static_cast<double>(figure);

  // assert
  ASSERT_EQ(area, 32 );
}

// ================================================================================= //


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
