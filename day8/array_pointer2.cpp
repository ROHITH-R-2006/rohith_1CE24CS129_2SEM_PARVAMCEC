#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int oddsum = 0;
    int evensum =0;
    int i;
    int*ptr=arr;
    cout<<"sum of odd and even index's elements in an array: "<<endl;
    for(i=0;i<5;i++)
    {
        if(i%2!=0)
        {
            oddsum+=*(ptr+i);
        }
        else
        {
            evensum+=*(ptr+i);
        }
    }
    cout<<"sum of odd:"<<oddsum<<endl;
    cout<<"sum of even:"<<evensum<<endl;
    return 0;
}
