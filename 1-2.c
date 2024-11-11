//2). WAP to read two integers and print their HCF (Highest Common Factor)
#include<stdio.h>
int main(){
    int n1,n2,i,hcf;
    printf("enter the integers n1 and n2\n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1||i<=n2;i++){
        if(n1%i==0 && n2%i==0)
        hcf=i;
    }
    printf("HCF=%d",hcf);
    return 0;
}
