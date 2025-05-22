#include<iostream>
using namespace std;
//funtion declaration
int add(int num1,int num2);
int main()
{
    //function call
    int a,b;
    cout<<"enter a :"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    int res1=add(a,b);
    cout<<"result 1 is:"<<res1<<endl;
}
//function defination
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}