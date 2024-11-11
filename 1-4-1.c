//4)WAP to accept two integer numbers and swap them using 4 different methods in C 
//language.
//1st part 
#include<stdio.h>
int main(){
    int a,b,x;
    printf("enter the value of a,b\n");
    scanf("%d %d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("after swapping a=%d,b=%d\n",a,b);
    return 0;
}
