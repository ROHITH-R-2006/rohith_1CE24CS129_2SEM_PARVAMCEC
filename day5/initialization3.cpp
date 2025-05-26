#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
    Person(string name,int age,int weight):name(name),age(age),weight(weight)
    {
        cout<<"person(parent) constructor"<<endl;
    }
};
class Student:public Person
{
    int roll_num;
public:
    Student(string name,int age,int weight,int roll_num):Person(name,age,weight),roll_num(roll_num)
    {
        cout<<"student(child) constructor"<<endl;
    }
    void display()
    {
        cout<<"student details:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"weight:"<<weight<<endl;
        cout<<"roll number:"<<roll_num<<endl;
    }
};
int main()
{
    Student s1("pavan",18,50,129);
    s1.display();
    return 0;
}