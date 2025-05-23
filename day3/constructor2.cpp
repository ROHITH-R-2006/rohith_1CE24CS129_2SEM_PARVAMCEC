//constructor-it is a special type of method that will call automatically when object is created.
//By default compiler will provide default contructor
//constructor name should be same as class name
//constructor does not have return type
//constructor is used to initialize the values for data members
//this-> is a keyword that refers to currnt class instance
#include<iostream>
using namespace std;
class BankAccount
{
public:
    string holder_name;
    int account_number;
    // all-argument or full-argument constructor
    BankAccount(string name,int acc_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->account_number=acc_no;
        this->holder_name=name;
    }
    void display()
    { 
        cout<<"holder name:"<<this->holder_name<<endl;//not necessary to use this->in cout
        cout<<"account number:"<<this->account_number<<endl;
    }
};    
int main()
{
    BankAccount b1("pavan",100);
    b1.display();
    return 0;

}
