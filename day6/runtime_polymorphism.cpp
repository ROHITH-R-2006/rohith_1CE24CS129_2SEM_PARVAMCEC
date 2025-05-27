#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal Making sound";
    }
};
class Dog : public Animal
{
public:
void makeSound() override // optional to use "override"
{
    cout << "Dog Making Sound";
}
};
int main()
{
    Animal *a1;
    Dog d1;
    a1 = &d1; // code will run in run time not ay compile time
    a1-> makeSound();
}