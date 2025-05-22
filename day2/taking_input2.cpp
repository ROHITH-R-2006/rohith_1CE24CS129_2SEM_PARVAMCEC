#include<iostream>
using namespace std;
int main()
{
    int age;
    float marks;
    char gender;
    string name;
    cout<<"enter age:"<<endl;
    cin>>age;
    cout<<"enter marks:"<<endl;
    cin>>marks;
    cout<<"enter gender:"<<endl;
    cin>>gender;
    cin.ignore();//to clear the input
    cout<<"enter name:"<<endl;
    //cin>>name;//(or)
    getline(cin,name);
    cout<<"student details:"<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"gender:"<<gender<<endl;
    cout<<"marks:"<<marks<<endl;
    return 0;
}