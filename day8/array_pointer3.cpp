#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int count_odd = 0;
    int count_even= 0;
    int i;
    int*ptr=arr;
    cout<<"count the number of odd and even  elements in an array: "<<endl;
    for(i=0;i<5;i++)
    {
        if((ptr[i]%2)==0)
        {
            count_even+=1;
        }
        else
        {
            count_odd+=1;
        }
    }
    cout<<"sum of odd:"<<count_odd<<endl;
    cout<<"sum of even:"<<count_even<<endl;
    return 0;
}


