#include <iostream>

using namespace std;
void squareArea(double lenght){
    cout << "Enter the length of the suare: ";
    cin >> lenght;
     double area = lenght * lenght;
    cout << "The area of a square length "<< lenght <<" is "<<area <<endl;
}
void rectangleArea(double length, double width){
    cout << "Enter the length of your rectangle: ";
    cin >> length;
    cout << "Enter the width of your rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "The area of a rectangle length "<< length <<" and width "<< width <<" is "<<area<<endl;
}
void triangleArea(double base, double height){
    cout << "Enter the base of your triangle: ";
    cin >> base;
    cout << "Enter the height of your triangle: ";
    cin >> height;
    double area = 0.5 * base * height;

    cout << "The area of a triangle base "<< base <<" and height "<< height <<" is "<<area<<endl;
}

int main(){

    char response;
    cout << "Please enter the area of the shape to calculate";
    do{
        cout << endl;
        cout << "1. Square \n";
        cout << "2. Rectangle \n";
        cout << "3. Triangle \n";
        cout << "4. Quit program \n" << endl;

        cout << "Enter selection : ";
        cin >> response;

        switch(response){
            //these passed arguements will be replaced with user's choice
            case '1':
                squareArea(1);
                break;
            case '2':
                rectangleArea(1,1);
                break;
            case '3':
                triangleArea(1,1);
                break;
            case '4':
                cout << "THE PROGRAM HAS EXITED SUCCESSFULLY!!" << endl; 
                break;
            default: cout << " Your input was "<< response<< " which is an invalid input \n" "Please enter a valid input!!! \n";            
        }
        
    } while (response != '4');

    return 0;
}