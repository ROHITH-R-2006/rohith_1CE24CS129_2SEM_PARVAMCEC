#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    *ptr=101;
    int b=20;
    ptr=&b;
    *(&(*ptr))=30;
    cout<<"the value of a :"<<a<<endl;
    cout<<"the value of b :"<<b<<endl;
    return 0;
}