#include <iostream>
#include <string>
using namespace std;
class Product 
{
private:
    int product_ID;
    string name;
    int quantity;
    float price;

public:
    Product(int id, string n, int q, float p) 
    {
        product_ID = id;
        name = n;
        quantity = q;
        price = p;
    }
    void updateStock(int q) {
        quantity += q;
    }
    float calculateTotalValue()
    {
        return quantity * price;
    }
    void display()
     {
        cout << "Product ID: " << product_ID << endl;
        cout<< "Name: " << name<<endl;
        cout << "Total Value: " << calculateTotalValue() << endl;
    }
};
int main() 
{
    Product p1(101, "BOX", 50, 2.5);
    Product p2(102, "NOTEBOOK", 30, 5.0);
    Product p3(103, "LAPTOP", 100, 1.0);
    p1.updateStock(20);
    p2.updateStock(10);
    p3.updateStock(50);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}