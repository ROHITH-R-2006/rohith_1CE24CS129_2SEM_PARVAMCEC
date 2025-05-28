#include <iostream>
using namespace std;
class Shape 
{
public:
    virtual void calculateArea() 
    {
        cout << "Area not defined for generic shape." << endl;
    }
};
class Circle : public Shape 
{
    double radius;
public:
    Circle(double r) : radius(r) 
    {
        cout<<"circle"<<endl;
    }
    void calculateArea() override 
    {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Shape 
{
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) 
    {
        cout<<"rectangle"<<endl;
    }
    void calculateArea() override 
    {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};
int main() 
{
    Shape *s;
    Circle c(5.0);
    Rectangle r(4.0, 6.0);
    s = &c;
    s->calculateArea();
    s = &r;
    s->calculateArea();
    Shape generic;
    s = &generic;
    s->calculateArea();
    return 0;
}