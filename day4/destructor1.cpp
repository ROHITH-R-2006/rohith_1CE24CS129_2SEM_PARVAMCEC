#include<iostream>
using namespace std;
class Student
{
private:    
    string name;
public:
    Student(string name)
    {
        this->name=name;
        cout<<"Constructor called for:"<<name<<endl;
    }
    //destructor
    ~Student()
    {
        cout<<"Destructor called for:"<<name<<endl;
    }
};
int main()
{
    Student s1("pavan");
    Student s2("mark");
    Student s3("steve");
    return 0;
}
