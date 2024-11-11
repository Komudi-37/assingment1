//5. WAP to check whether number is Perfect Number or not
#include<stdio.h>
int main(){
    int n,rem,sum=0,i;
    printf("enter the integer\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
    rem=n%i;
    if(rem==0)
    sum=sum+i;
    }
    if(sum==n)
    printf("%d the no. is perfect\n",n);
else
printf("%d the no. is not perfect\n",n);
return 0;
}
