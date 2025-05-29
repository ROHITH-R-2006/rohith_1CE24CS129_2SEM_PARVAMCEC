#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size:"<<endl;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter element:"<<endl;
        cin>>*(arr+i);
//can also be written as cin>>i[arr]; or cinn>>arr[i];
    }
    cout<<"elements of an array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}