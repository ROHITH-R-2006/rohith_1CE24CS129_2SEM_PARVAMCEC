#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    Person(string name,int age):name(name),age(age)
    {
        cout<<"person called"<<endl;
    }
    void display_person()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
class Student:public Person
{
    int roll_num;
    public:
    Student(string name,int age,int num):Person(name,age),roll_num(num)
    {
        cout<<"student called"<<endl;
    }
    void display_student()
    {
        cout<<"student details:"<<endl;
        display_person();
        cout<<"roll number:"<<roll_num<<endl;
    }
};
class Teacher:public Person
{
    int salary;
    public:
    Teacher(string name,int age,int salary):Person(name,age),salary(salary)
    {
        cout<<"teacher called"<<endl;
    }
    void display_teacher()
    {
        cout<<"teacher details:"<<endl;
        display_person();
        cout<<"salary:"<<salary<<endl;   
    }
};
int main()
{
    Student s1("ben",18,129);
    s1.display_student();
    Teacher t1("mary",32,20000);
    t1.display_teacher();
}
