//1) WAP to check whether a given is Armstrong or not.
#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf(" %d is an armstrong  number ",sum);    
else    
printf("%d is not an armstrong number",sum);    
return 0;  
}
