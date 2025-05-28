#include<iostream>
using namespace std;
class Shape
{
    virtual void calculateArea()
    {
        cout<<"Area not defined for generic shape"<<endl;
    }
};
class Circle:public Shape
{
private:
    float radius;
    float area;
public:
    Circle(float radius):radius(radius)
    {
        cout<<"circle:"<<endl;
    }
    void calculateArea()override
    {
        area=3.14*radius*radius;
        cout<<"Area of circle:"<<area<<endl;
    }
};
class Rectangle:public Shape
{
private:
    float length;
    float width;
    float area;
public:
    Rectangle(float length,float width):length(length),width(width)
    {
        cout<<"rectangle:"<<endl;
    }
    void calculateArea()override
    {
        area=length*width;
        cout<<"Area of Rectangle:"<<area<<endl;
    }
};
class Triangle:public Shape
{
private:
    float base;
    float height;
    float area;
public:
    Triangle(float base,float height):base(base),height(height)
    {
        cout<<"triangle:"<<endl;
    }
    void calculateArea()override
    {
        area=0.5*base*height;
        cout<<"Area of Triangle:"<<area<<endl;
    }
};
int main()
{
    Circle c1(2.3);
    c1.calculateArea();
    Rectangle r1(2.3,4.4);
    r1.calculateArea();
    Triangle t1(1.2,4.3);
    t1.calculateArea();
    return 0;
}
