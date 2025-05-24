#include<iostream>
using namespace std;
int main()
{
    int op;
    int a,b;
    cout<<"enter an operator(1,2,3,4,5,6):"<<endl;
    cin>>op;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    switch(op)
    {
        case 1:
            cout<<"sum is: "<<a+b<<endl;
        break;
        case 2:
            cout<<"difference is: "<<a-b<<endl;
        break;
        case 3:
            cout<<"product is: "<<a*b<<endl;
        break;
        case 4:
            cout<<"quotient is: "<<a/b<<endl;
        break;
        case 5:
            cout<<"mod: "<<a%b<<endl;
        break;
        case 6:
            cout<<"exit"<<endl;
        break;
        default:
            cout<<"invalid operator"<<endl;
        break;
    }
    return 0;
}