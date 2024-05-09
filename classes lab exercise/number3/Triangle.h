#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes{
     class Triangle{
        private:
            double base;
            double height;

        public:
            Triangle();
            Triangle(double newBase, double newHeight);
            void setBase(double Base);
            void setHeight(double Height);
            double getBase();
            double getHeight();
            ~Triangle();

    };
};
#endif