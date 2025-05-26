/*inheritance-extending the properties of parent(base) class to child(derived)class
  properties include data members and member function
  
  types of inheritance:
  1. single level-parent to child
  2. multi level-grand parent to parent to child
  3. multiple-from parent1 and parent2 to child
  4. hierarchical-single parent with multiple child with different properties
  5. hybrid-the combination of more than one inheritance
  6. multipath-   person
                /       \   
        youtuber      developer
               \        /   
                codeveloper
*/                

#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;
    int weight;
public:
    Person()
    {
        cout<<"person(parent) constructor"<<endl;
    }
};
class Student:public Person
{
    int roll_num;
public:
    Student(string name,int age,int weight,int roll_num)
    {
        cout<<"student(child) constructor"<<endl;
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
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