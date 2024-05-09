#ifndef AREA_H
#define AREA_H
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"


namespace shapes{
    class Area{
        private:

        public:
            static double squareArea(shapes::Square& squareObj);
            static double triangleArea(shapes::Triangle& TriangleObj);
            static double circleArea(shapes::Circle& CircleObj);

    };
}
#endif