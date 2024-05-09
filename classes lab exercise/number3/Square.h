#ifndef SQUARE_H
#define SQUARE_H
namespace shapes{
     class Square{
        private:
            double sideLength;
        
        public:
            Square();
            Square(double newSideLength);
            void setLength(double newSideLength);
            double getLength();
            ~Square();
    };

};
#endif