//encapsulation-wrapping of data and data function into single unit or will hide the data
//we can give access to that members using get() and set()
//prefix of method should be followed by variable name
#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_number;
public:
    string getname()
    {
        return this->name;
    }
    int getnum()
    {
        return this->roll_number;
    }
    void setname(string name)
    {
        this->name=name;
    }
    void setnum(int num)
    {
        this->roll_number=num;
    }
};
int main()
{
    Student s1;
    s1.setname("mike");
    s1.setnum(123);
    cout<<"name:"<<s1.getname()<<endl;
    cout<<"roll number:"<<s1.getnum()<<endl;
    return 0;
}