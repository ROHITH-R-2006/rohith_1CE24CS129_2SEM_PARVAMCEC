#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum is:%d\n",sum);
    printf("address of a is :%p\n",&a);
    printf("value of a is :%d\n",*(&a));
    return 0;
}
