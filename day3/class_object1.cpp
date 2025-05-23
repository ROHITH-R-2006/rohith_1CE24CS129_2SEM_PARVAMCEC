#include<iostream>
using namespace std;
class BankAccount
{
public:
    string holder_name;
    int account_number;
};
int main()
{
    BankAccount b1;
    b1.holder_name="pavan";
    b1.account_number=19;
    cout<<"holder name:"<<b1.holder_name<<endl;
    cout<<"account name:"<<b1.account_number<<endl;
    return 0;
}
//-0 bank.exe -to create other file to execute