#include "Circle.hpp"

const double pi = 3.141592;


Circle::Circle(double _radius): radius(_radius){}

int  Circle::get_area () const {
  return pi * radius * radius;
}

double Circle::get_circumference() const {
  double circumference = 2.0 * pi * radius;
  return circumference;
  
}