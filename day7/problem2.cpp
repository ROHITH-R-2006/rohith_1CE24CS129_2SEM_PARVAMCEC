#include<iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int id;
    float baseSalary;
protected:
    Employee(string name,int id,float baseSalary):name(name),id(id),baseSalary(baseSalary)
    {
        cout<<"employee(parent):"<<endl;
    }
    virtual float calculateSalary() 
    {
        cout<<"base salary:"<<baseSalary<<endl;
    }
    virtual void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        calculateSalary();
    }
};
class Manager:public Employee
{
private:
    float bonus;
    float salary;
public:
    Manager(string name,int id,float baseSalary,float bonus):Employee(name,id,baseSalary),bonus(bonus)
    {
        cout<<"manager details:"<<endl;
    }
    float calculateSalary()
    {
        salary=baseSalary+bonus;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        calculateSalary();
        cout<<"Total salary:"<<salary<<endl;
    }
};
class Developer:public Employee
{
private:
    float overtimePay;
    float salary;
public:
    Developer(string name,int id,float baseSalary,float overtimePay):Employee(name,id,baseSalary),overtimePay(overtimePay)
    {
        cout<<"developer details:"<<endl;
    }
    float calculateSalary()
    {
        salary=baseSalary+overtimePay;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        calculateSalary();
        cout<<"Total salary:"<<salary<<endl;
    }
};
int main()
{
    Manager m1("mark",123,20000,500);
    m1.display();
    Developer d1("steve",129,200000,5000);
    d1.display();
    return 0;
}
