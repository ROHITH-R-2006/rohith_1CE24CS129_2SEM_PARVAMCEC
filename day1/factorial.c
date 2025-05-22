#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter a number to get the factorial:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }    
    printf("factorial of %d: %d", num,fact);
}  
