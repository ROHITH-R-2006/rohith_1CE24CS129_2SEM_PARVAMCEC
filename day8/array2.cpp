#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout<<"enter the values of array:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"enter the "<<i+1 << "element:"<<endl;
        cin>>arr[i];
    }
    cout<<"array elements:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<i+1 << "element is:"<<arr[i]<<endl;
    }
    return 0;
}