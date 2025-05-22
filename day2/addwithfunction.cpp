//function is used for code reusebility
//function is a set of rules to solve particular problem when it is called
//function declaration/prototype-return_type name_function(parameter)
//function defination-return_type name_function(parameter){logic}
//function call-name_function(argumrnts);
#include<iostream>
using namespace std;
//funtion declaration
int add(int num1,int num2);
int main()
{
    //function call
    int a=10;
    int b=20;
    int res1=add(a,b);
    cout<<"result 1 is:"<<res1<<endl;
    int c=40;
    int d=30;
    int res2=add(c,d);
    cout<<"result 2 is:"<<res2<<endl;
}
//function defination
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
