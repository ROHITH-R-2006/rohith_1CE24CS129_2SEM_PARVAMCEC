#include<iostream>
using namespace std;
int fact(int num);//function declaration or prototype
int main()
{
    int input;
    cout<<"enter a number:"<<endl;
    cin>>input;
    int res=fact(input);
    cout<<"result:"<<res<<endl;
}
int fact( int num)
{
    if(num==1)//base condiiton
    {
        return 1;
    }
    return num*fact(num-1);//logic 
}
