//types of user defined data type
//type1:accept parameters and not return a value
//type2:accept parameters and  return a value
//type3:not accept parameters and  return a value
//type4:not accept parameters and not return a value

#include<iostream>
using namespace std;
//funtion declaration
int add(int num1,int num2);//type2
void sub(int num1,int num2);//type1
int mul();//type3
void div();//type4
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
    sub(a,b);
    int res2=mul();
    cout<<"the mul is:"<<res2<<endl;
    div();
}
//function defination
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
void sub(int num1,int num2)
{
    cout<<"the sub is :"<<num1-num2<<endl;
}
int mul()
{
    int a=10;
    int b=2;
    return a*b;
}
void div()
{
     int a=10;
     int b=2;
     cout<<"the division is :"<<a/b<<endl;
}