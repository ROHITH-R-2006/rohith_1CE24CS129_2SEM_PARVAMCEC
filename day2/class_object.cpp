#include<iostream>
using namespace std;
class Student
//properties
{
public:    
    string name;
    string USN;
    int classname;
//actions
    void write()
    {
        cout<<"student is writing"<<endl;
    }
    void read()
    {
        cout<<"student is reading"<<endl;
    }
};
int main()
{
    Student std1,std2;
    std1.name="rick";
    std1.USN="1234";
    std1.classname=12;
    cout<<"student name:"<<std1.name<<endl;
    cout<<"student usn:"<<std1.USN<<endl;
    cout<<"classname:"<<std1.classname<<endl;
    std1.write();
    std1.read();
    cout<<"----------"<<endl;
    std2.name="mark";
    std2.USN="4321";
    std2.classname=13;
    cout<<"student name:"<<std2.name<<endl;
    cout<<"student usn:"<<std2.USN<<endl;
    cout<<"classname:"<<std2.classname<<endl;
    std1.write();
    std1.read();
    return 0;
}
