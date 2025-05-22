#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("enter a number:");
    scanf("%d", &num);
    for(int i=0; i<=num; i++)
    {
        sum=sum+i;    
    }
    printf("the sum of natural numbers from 0 to %d is: %d", num, sum);
}