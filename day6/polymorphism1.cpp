/*types of polymorphism:
   1. compile time
   2. run time
      (a) method overloading-same method but different parameters
      (b) operator overloading

*/


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a =3;
    int b=4;
    string s1="hello";
    string s2=" world";
    cout<<"sum:"<<a+b<<endl;
    cout<<"product:"<<a*b<<endl;
    cout<<"concatenate:"<<s1+s2<<endl;
    return 0;
}