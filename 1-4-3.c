//q4 3rd part
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a,b\n");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping xor , a=%d,b=%d",a,b);
    return 0;
}
