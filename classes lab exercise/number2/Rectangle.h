#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
private:
    float length; 
    float width; 
public:
    Rectangle();
    Rectangle(float,float);
    ~Rectangle();

    void setLength(float);
    void setWidth(float);

    float getLength();
    float getWidth();
    
    float getArea();


};
#endif