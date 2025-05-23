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
        cout<<"constructor is called automatically"<<endl;
    }
};
int main()
{
    BankAccount b1;
    return 0;
}