//max element in an array and rversing the elements in an array using pointers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in an array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int*ptr=arr;
    int largest=*ptr;
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }
    cout<<"the largest element in an array:"<<largest<<endl;
    return 0;
}