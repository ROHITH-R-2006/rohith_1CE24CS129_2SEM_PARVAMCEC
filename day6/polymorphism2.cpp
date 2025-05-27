#include<iostream>
using namespace std;
class Sum
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    Sum m1;
    int res1=m1.add(1,2);
    cout<<"the result is:"<<res1<<endl;
    int res2=m1.add(2,3,4);
    cout<<"the result is:"<<res2<<endl;
    return 0;
}