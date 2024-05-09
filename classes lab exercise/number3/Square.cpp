#include <iostream>
#include "Square.h"


using namespace shapes;
using namespace std;

Square :: Square(){
    sideLength = 0;
}
Square :: Square(double newSideLength){
    sideLength = newSideLength;
}
void Square :: setLength(double newSideLength){
    sideLength = newSideLength;
}
double Square :: getLength(){
    return sideLength;
}
Square :: ~Square(){

}