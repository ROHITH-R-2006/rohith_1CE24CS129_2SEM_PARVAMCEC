#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"Address of a:"<<&a<<endl;
    int *ptr=&a;
    cout<<"Ptr values:"<<ptr<<endl;
    cout<<"===================="<<endl;
    cout<<"value of a using a:"<<a<<endl;
    cout<<"value of a using ptr:"<<*ptr<<endl;
    cout<<"value of a using &a:"<<*(&a)<<endl;
    cout<<"value of a :"<<*(*(&ptr))<<endl;
    cout<<"value of a using:"<<*(&*(ptr))<<endl;
    cout<<"===================="<<endl;
    cout<<"Ptr values:"<<ptr<<endl;
    cout<<"Ptr values:"<<&a<<endl;
    cout<<"Ptr values:"<<*(&ptr)<<endl;
    cout<<"Ptr values:"<<&(*ptr)<<endl;
    cout<<"Ptr values:"<<&(*(*(&ptr)))<<endl;
    return 0;
}