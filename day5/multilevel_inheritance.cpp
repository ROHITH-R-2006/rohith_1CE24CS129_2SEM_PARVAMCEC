#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
    Person(string name, int age, int weight) : name(name), age(age), weight(weight)
    {
        cout << "perosn constructor" << endl;
    }
    ~Person()
    {
        cout<<"destructor called for person"<<endl;
    }
};
class Employee : public Person
{
protected:
    int emp_id;
public:
    Employee(string name, int age, int weight, int emp_id):Person(name,age,weight),emp_id(emp_id)
    {
        cout<<"Employee constructor"<<endl;
    }
    ~Employee()
    {
        cout<<"destructor called for employee"<<endl;
    }
};
class Manager:public Employee
{
public:
    int salary;
    Manager(string name, int age, int weight, int emp_id,int salary):Employee(name,age,weight,emp_id),salary(salary)
    {
        cout<<"Manager constructor"<<endl;
    }
    ~Manager()
    {
        cout<<"destructor called for manager "<<endl;
    }
    void display()
    {
        cout<<"manager details:"<<endl;
        cout<<"manager name:"<<name<<endl;
        cout<<"manager age"<<age<<endl;
        cout<<"manager weight:"<<weight<<endl;
        cout<<"employee id:"<<emp_id<<endl;
        cout<<"manager salary:"<<salary<<endl;
    }
};
int main()
{
    Manager m1("mark",23,50,129,200000);
    m1.display();
    return 0;
}    

