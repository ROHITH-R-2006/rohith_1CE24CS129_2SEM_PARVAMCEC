#include <iostream>
using namespace std;
class BankAccount 
{
private:
    int account_Number;
    string holder_Name;
    double balance;
public:
    BankAccount(int accNo, string name, double bal)
     {
        account_Number = accNo;
        holder_Name = name;
        balance = bal;
    }
    void deposit(double amount)
     {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
          cout << "Invalid deposit amount." << endl;
        }  
    }
    void withdraw(double amount) 
    {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } 
        else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } 
        else 
        {
            balance -= amount;
        }
    }
    void display() 
    {
        cout << "Account Number: " << account_Number << endl;
        cout << "Holder Name: " << holder_Name << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main()
 {
    BankAccount acc1(1001, "Alice", 5000.0);
    BankAccount acc2(1002, "Bob", 3000.0);
    acc1.deposit(1000.0);
    acc2.deposit(500.0);
    acc1.withdraw(2000.0);
    acc2.withdraw(4000.0); 
    acc1.display();
    acc2.display();
    return 0;
}