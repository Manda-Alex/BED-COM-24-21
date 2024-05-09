#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    float length;
    float width;
    Rectangle obj1;

    cout<<"Enter the lenght and width of your rectangle: ";
    cin >> length;
    cin>> width;
    
    //assigning the entered values to the class functions
    obj1.setLength(length);
    obj1.setWidth(width);

    cout <<"The area of a rectangle length "<< obj1.getLength()<<" and width "<< obj1.getWidth()<<" is "<<obj1.getArea();
    return 0;
}