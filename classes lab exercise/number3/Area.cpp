#include <iostream>
#include "Area.h"
#include <cmath>

using namespace std;
using namespace shapes;
double Area ::circleArea(shapes::Circle& circleObj){
    return (circleObj.getRadius() * M_PI);

}
double Area ::squareArea(shapes::Square& squareobj){
    return (squareobj.getLength() * squareobj.getLength());

}
double Area ::triangleArea(shapes::Triangle& triangleobj){
    return(0.5 * triangleobj.getBase() * triangleobj.getHeight());

}