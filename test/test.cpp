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
  Point point(3, 9);

  // act
  double y = point.getY();

  // assert
  ASSERT_EQ(y, 9);
}

TEST(Point, getX) {
  // arrange 
  Point point(3, 9);

  // act
  double x = point.getX();

  // assert
  ASSERT_EQ(x, 3);
}

TEST(Point, notEqual) {
  // arrange 
  Point point(3, 9);

  // act
  double x = point.getX();
  double y = point.getY();

  // assert
  ASSERT_NE(x, y);
}

// ================================================================================= //

TEST(Figure, getArray) {
  // arrange 
  Vector <Point> array;
  array.push_back(Point(1, 0));
  array.push_back(Point(2, 8));
  Figure figure(array);

  // act
  Vector <Point> arraySecond = figure.getArray();

  // assert
  ASSERT_EQ(arraySecond, {Point(1, 0), Point(2, 8)});
}

TEST(Figure, center) {
  // arrange 
  Vector <Point> array;
  array.push_back(Point(1, 0));
  array.push_back(Point(2, 8));
  Figure figure(array);

  // act
  Point center = figure.center();

  // assert
  ASSERT_EQ(center, Point(1.5, 4));
}

TEST(Figure, comparison) {
  // arrange 
  Vector <Point> array;
  array.push_back(Point(1, 0));
  array.push_back(Point(2, 8));
  Figure figure(array);
  Figure secondFigure(array);

  // act
  bool comparison = (figure == secondFigure);

  // assert
  ASSERT_EQ(comparison, true);
}

// ================================================================================= //

TEST(Pentagon, area) {
  // arrange 
  Vector <Point> array;
  array.push_back(Point(1, 0));
  array.push_back(Point(2, 10));
  array.push_back(Point(7, 0));
  array.push_back(Point(0, 0));
  array.push_back(Point(0, 5));
  Pentagon figure(array);

  // arrange 
  double area = static_cast<double>(figure);

  // assert
  ASSERT_EQ(area, 52.5);
}

// ================================================================================= //

TEST(Rhomb, area) {
  // arrange 
  Vector <Point> array;
  array.push_back(Point(1, 5));
  array.push_back(Point(2, 8));
  array.push_back(Point(7, 0));
  array.push_back(Point(0, 8));
  Rhomb figure(array);

  // arrange 
  double area = static_cast<double>(figure);

  // assert
  ASSERT_EQ(area, 5);
}

// ================================================================================= //

TEST(Trapezoid, area) {
  
  // arrange
  Vector <Point> array;
  array.push_back(Point(1, 0));
  array.push_back(Point(2, 8));
  array.push_back(Point(7, 0));
  array.push_back(Point(0, 8));
  Trapezoid figure(array);
   
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
