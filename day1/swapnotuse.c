#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("original numbers are :%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped  numbers are:%d %d\n",a,b);
    return 0;
}
