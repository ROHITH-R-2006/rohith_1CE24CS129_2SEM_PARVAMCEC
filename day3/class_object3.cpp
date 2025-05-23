#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll_num;
    string class_name;
    int marks;
    public:
    Student(string name,int roll,string classname ,int marks)
    {
        this->name=name;
        this->roll_num=roll;
        this->class_name=classname;
        this->marks=marks;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll number:"<<roll_num<<endl;
        cout<<"class name:"<<class_name<<endl;
        cout<<"marks:"<<marks<<endl;
        if(marks>90 && marks<=100)
        {
            cout<<"a+"<<endl;
        }
        else if(marks>80 && marks<=90)
        {
            cout<<"a"<<endl;
        }
        else if(marks>70 && marks<=80)
        {
            cout<<"b+"<<endl;
        }
        else if(marks>60 && marks<=70)
        {
            cout<<"b"<<endl;
        }
        else if(marks>50 && marks<=60)
        {
            cout<<"c+"<<endl;
        }
        else if(marks>40 && marks<=50)
        {
            cout<<"c"<<endl;
        }
        else
        {
            cout<<"f"<<endl;
        }
    }
};
int main()
{
    cout<<"student details:"<<endl;
    Student s1("rick",230,"f section",100);
    Student s2("mark",240,"f section",30);
    s1.display();
    s2.display();
    return 0;
}
