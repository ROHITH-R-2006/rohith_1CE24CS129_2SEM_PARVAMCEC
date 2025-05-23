#include<iostream>
using namespace std;
class Bus
{
public:
  string route;
  int bus_number;
  Bus(string route,int number)
  {
    this->bus_number=number;
    this->route=route;
  }
  void display()
  {
    cout<<"Route:"<<route<<endl;
    cout<<"bus number:"<<bus_number<<endl;
  }
};
int main()
{
    Bus s1("mangalore",345);
    Bus s2("bangalore",123);
    s1.display();
    s2.display();
    return 0;
}