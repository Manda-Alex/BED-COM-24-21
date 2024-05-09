#include <iostream>
#include "Circle.h"


using namespace shapes;
using namespace std;

Circle :: Circle(){
    radius = 1;
}
Circle :: Circle(double newRadius){
    radius = newRadius;
}
void Circle :: setRadius(double newRadius){
    radius = newRadius;
}
double Circle :: getRadius(){
    return radius;
}
Circle :: ~Circle(){

}