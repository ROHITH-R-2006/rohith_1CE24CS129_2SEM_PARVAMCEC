#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int year_of_working;
    int retirement_age;
public:
    Person(string name,int year_of_working,int retirement_age):name(name),year_of_working(year_of_working),retirement_age(retirement_age)
    {
        cout<<"person(parent) constructor"<<endl;
    }
};
class Employee:public Person
{
    int salary;
public:
    Employee(string name,int year_of_working,int retirement_age):Person(name,year_of_working,retirement_age),salary(salary)
    {
        cout<<"Employee(child) A "<<endl;
    }
    void display()
    {
        cout<<"Employee details:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"Year of working:"<<year_of_working<<endl;
        cout<<"Retirement age:"<<retirement_age<<endl;
    }
};
int main()
{
    Employee s1("pavan",1999,50);
    s1.display();
    return 0;
}