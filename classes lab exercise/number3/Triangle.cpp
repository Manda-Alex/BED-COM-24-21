#include <iostream>
#include "Triangle.h"


using namespace shapes;
using namespace std;
Triangle :: Triangle(){
    base = 0;
    height = 0;
}
Triangle :: Triangle(double newBase, double newHeight){
    base = newBase;
    height = newHeight;
}
void Triangle :: setBase(double newBase){
    base = newBase;
}
void Triangle :: setHeight(double newHeight){
    height = newHeight;
}
double Triangle :: getBase(){
    return base;
}
double Triangle :: getHeight(){
    return height;

}
Triangle :: ~Triangle(){

}