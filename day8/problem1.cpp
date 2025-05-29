#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_num;
public:
    void takeInput()
    {
        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the roll number:"<<endl;
        cin>>roll_num;
    }
    void display()
    {
        takeInput();
        cout<<"student details:"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"roll_num:"<<roll_num<<endl;
    }
};
int main()
{
//using arrays
    Student students[3];
    for(int i=0;i<3;i++)
    {
        students[i].display();
    }
    return 0;
}
