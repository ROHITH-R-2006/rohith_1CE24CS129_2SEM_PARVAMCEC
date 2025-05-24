#include<iostream>
using namespace std;
class BankAccount
{
private:    
    string holder_name;
public:
    BankAccount(string name)
    {
        this->holder_name=name;
        cout<<"constructor name:"<<name<<endl;
    }
    ~BankAccount()
    {
     cout<<"destructor name:"<<holder_name<<endl;
    }
};
int main()
{
    BankAccount b1("clark");
    BankAccount b2("steve");
    BankAccount b3("mark");
    return 0;
}
//function defined inside the class is known as method
//if it is declared inside the class is known as function