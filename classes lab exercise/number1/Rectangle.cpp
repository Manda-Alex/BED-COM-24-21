#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle :: Rectangle(){
    length = 0;
    width = 0;
}
void Rectangle :: setLength(float newLength){
    length = newLength;

}
void Rectangle :: setWidth(float newWidth){
    width = newWidth;
}
float Rectangle :: getLength(){
    return length;
}
float Rectangle :: getWidth(){
    return width;
}
float Rectangle :: getArea(){
    return length * width;
}
Rectangle :: ~Rectangle(){

}