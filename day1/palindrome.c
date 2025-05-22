#include<stdio.h>
int main()
{
    int num,rev=0,org,digit;
    printf("enter the number:");
    scanf("%d",&num);
    org=num;
    printf("entered or original number:%d\n",num);
    while(num>0)
    {
        digit=num % 10;//to get last number
        rev = rev * 10 + digit;
        num = num / 10;//to get remaining numbers          
    }
    printf("reversed number :%d\n",rev);
    if(org==rev)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not  palindrome"); 
    }
    return 0;
}