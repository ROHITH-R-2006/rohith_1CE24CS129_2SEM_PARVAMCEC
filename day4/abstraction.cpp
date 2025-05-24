//abstraction-showing necessary details for user or will hide implementation
#include<iostream>
using namespace std;
class ATM
{
private:
    int balance;
    bool verifypin(int pin)
    {
        if(pin==1234)
        {
            return true;
        }
        return false; 
    }
    void display()
    {
        cout<<"balance amount:"<<this->balance<<endl;
    }
public:
    ATM(int balance){
        this->balance=balance;
    }
    void withdraw(int amount,int pin)
    {
        bool res=verifypin(pin);
        if(res)
        {
            if(amount>0)
            {
                if(amount>balance)
                {
                    cout<<"insufficient balance"<<endl;
                }
                else
                {
                    balance-=amount;
                    display();
                }
            }    
            else
            {
                cout<<"invalid amount"<<endl;
            }
        }    
        else
        {
            cout<<"invalid pin"<<endl;
        }
    }
};
int main()
{
    ATM a1(50000);
    a1.withdraw(1000,1234);
    return 0;
}