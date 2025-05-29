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
  int size;
  cout<<"Enter a size of an array:"<<endl;
  cin>>size;
  Student *students=new Student[size];
  for(int i=0;i<size;i++)
  {
    (students+i)->display();
  }
    delete students;
    return 0;
}