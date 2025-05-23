/**types of constructor:
  1. default constructor
  2. parameterized constructor(full args constructor and args constructor )
  3. copy constructor-shalloe copy and deep copy
  */
//constructor overloading-multiple constructors used with different parameters


#include<iostream>
using namespace std;
class BankAccount
{
public:
    string holder_name;
    int account_number;
    //default constructor
    BankAccount()
    {
        cout<<"default constructor"<<endl;
        this->holder_name="unknown";
        this->account_number=0;
    }
    // all-argument or full-argument constructor
    BankAccount(string name,int acc_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->account_number=acc_no;
        this->holder_name=name;
    }
    //copy constructor-shallow copy
    BankAccount(BankAccount &b1)//classname(return value/datatype ,addressing of object)
    {
        this->account_number=b1.account_number;
        this->holder_name=b1.holder_name;
    }
    void display()
    { 
        cout<<"holder name:"<<this->holder_name<<endl;//not necessary to use this->in cout
        cout<<"account number:"<<this->account_number<<endl;
    }
};    
int main()
{
    BankAccount b1;
    BankAccount b2("pavan",100);
    BankAccount b3=b1;//copying the object
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
