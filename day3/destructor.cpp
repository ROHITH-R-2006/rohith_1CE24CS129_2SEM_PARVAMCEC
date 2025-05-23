//pointer is a variable that stores the address of another variable
//destructor-it is aspecial method that will call automatically once the object is destroyed
//name of destructor should be same as classname with prefix "~"
//job of destroyer is to destroy dynamic memory
#include<iostream>
using namespace std;
class Parent
{
public:
    string name;
    Parent(string name)
    {
        cout<<"constructor is called"<<endl;
        this->name=name;
    }
    void display()
    {
        cout<<"name of the parent:"<<name<<endl;
    }
//destructor
    ~Parent()
    {
       cout<<"destructor is called"<<endl;
    }
};
int main()
{
    Parent p1("pavan");
    p1.display();
    return 0;
}
