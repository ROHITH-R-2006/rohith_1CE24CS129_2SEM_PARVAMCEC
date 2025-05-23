#include<iostream>
using namespace std;
class Bus
{
public:
string route;
int bus_number;
};
int main()
{
    Bus s1,s2;
    s1.route="bangalore";
    s1.bus_number=123;
    s2.route="rr nagar";
    s2.bus_number=234;
    cout<<"bus1 route:"<<s1.route<<endl;
    cout<<"bus2 route:"<<s2.route<<endl;
    cout<<"bus1 bus number:"<<s1.bus_number<<endl;
    cout<<"bus2 bus number:"<<s2.bus_number<<endl;
    return 0;
}