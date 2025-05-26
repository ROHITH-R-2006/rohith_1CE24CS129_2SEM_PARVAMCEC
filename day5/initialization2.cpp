#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    int work_hours;
public:
    Employee(string name,int work):name(name),work_hours(work)
    {
        cout<<"employee details"<<endl;
        cout<<"================"<<endl;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"work hours:"<<work_hours<<endl;
    }
};
int main()
{
    Employee e1("mark",12);
    e1.display();
    Employee e2("steve",13);
    e2.display();
    return 0;
}