#include <iostream>
using namespace std;
//abstract class
class Payment 
{
public:
    virtual void makePayment(double amount) = 0; // pure virtual function
};

// Derived class or class for CreditCard
class CreditCard : public Payment 
{
public:
    void makePayment(double amount)
    {
        cout << "Paid " << amount << " using Credit Card." << endl;
    }
};

// Derived class for PayPal
class PayPal : public Payment 
{
public:
    void makePayment(double amount)
    {
        cout << "Paid " << amount << " using PayPal." << endl;
    }
};

// Derived class for UPI
class UPI : public Payment
{
public:
    void makePayment(double amount)  
    {
        cout << "Paid " << amount << " using UPI." << endl;
    }
};

int main()
 {
    // Create Payment pointers
    Payment* payment1 = new CreditCard();
    Payment* payment2 = new PayPal();
    Payment* payment3 = new UPI();

    // Call makePayment() for different types of payments
    payment1->makePayment(100.0);
    payment2->makePayment(250.0);
    payment3->makePayment(500.0);
    return 0;
}