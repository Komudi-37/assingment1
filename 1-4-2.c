//q4 2nd part
#include <stdio.h>
int main()
{ int x,y;
printf("enter the two numbers\n");
scanf("%d %d",&x,&y);
    x = x + y; 
    y = x - y;
    x = x - y;
    printf("after swapping x=%d,y=%d",x,y);
}
