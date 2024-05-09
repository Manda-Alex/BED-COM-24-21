#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes{
    class Circle{
        private:
            double radius;

        public:
            Circle();
            Circle(double newRadius);
            void setRadius(double newRadius);
            double getRadius();
            ~Circle();

    };
};
#endif