#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main(){
    char response;
    double length, base, height, radius;
    Triangle triangle1;
    Circle circle1;
    Square square1;

    cout << "Please enter the area of the shape to calculate";
    do{
        cout << endl;
        cout << "1. Calculate area of Square \n";
        cout << "3. Calculate area of Triangle \n";
        cout << "2. Calculate area of Circle \n";
        cout << "4. Quit program \n" << endl;
        cout << "Enter selection : ";
        cin >> response;

        switch(response){
            
            case '1':
                cout << "Enter the length of your square: ";
                    cin >> length;
                    square1.setLength(length);
                cout <<"The area of a square length "<<square1.getLength()<< " is" << Area::squareArea(square1);    
                    break;

            case '2':
                cout << "Enter the base of your triangle: ";
                    cin >> base;
                    triangle1.setBase(base);
                cout << "Enter the height of your triangle: ";
                    cin >> height;
                    triangle1.setHeight(height);
                cout <<"The area of a triangle base "<< triangle1.getBase()<< " and height "<< triangle1.getHeight()<< " is "<< Area::triangleArea(triangle1);
                    break;

            case '3':
                cout << "Enter the radius of your circle: ";
                    cin >> radius;
                    circle1.setRadius(radius);
                cout<< "The area of the circle radius "<<circle1.getRadius()<<" is "<< Area::circleArea(circle1);    
                    break;

            case '4':
                cout << "The program is exiting....GOODBYE!!";
        }

    }while (response != '4');
    return 0;
}