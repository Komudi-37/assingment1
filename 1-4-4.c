//q4 4th part
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a,b\n");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
}
