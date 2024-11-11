//3) WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("enter any two no.\n");
    scanf("%d %d",&a,&b);
    sum=a+~b+1;
    printf("difference of two integers :%d",sum);
    return 0;
}
