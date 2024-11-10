1) WAP to check whether a given is Armstrong or not.
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
2)WAP to read two integers and print their HCF (Highest Common Factor).
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
3)WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator).
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("enter any two no.\n");
    scanf("%d %d",&a,&b);
    sum=a+~b+1;
    printf("difference of two integers :%d",sum);
    return 0;
}
4)WAP to accept two integer numbers and swap them using 4 different methods in C language.
1.#include<stdio.h>
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
2.#include <stdio.h>
int main()
{ int x,y;
printf("enter the two numbers\n");
scanf("%d %d",&x,&y);
    x = x + y; 
    y = x - y;
    x = x - y;
    printf("after swapping x=%d,y=%d",x,y);
}
3.#include<stdio.h>
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
4.#include<stdio.h>
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
5) WAP to check whether number is Perfect Number or not.
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
6). WAP to accept a coordinate point in an XY coordinate system and determine in which 
quadrant the coordinate point lies.
#include <stdio.h>
int main() {
    float x, y;
    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant I.\n", x, y);
    } 
    else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant II.\n", x, y);
    } 
    else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant III.\n", x, y);
    } 
    else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in Quadrant IV.\n", x, y);
    }
    else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    }
    else if (y == 0 && x != 0) {
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    }
    else {
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    }
    return 0;
}
7)WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user's choice.
#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int choice, number;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("Decimal: %d\n", binaryToDecimal(number));
    } 
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        decimalToBinary(number);
    } 
    else {
        printf("Invalid choice! Please choose 1 or 2.\n");
    }
    return 0;
}
8)WAP to print below mentioned pattern:
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } 
            else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
9). WAP to print following Pyramid.
 #include <stdio.h>

int main() {
    int i, j, k, n = 5;  
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);  
        }
        for (k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);  
        }
        printf("\n");
    }
    return 0;
}
10)WAP to print Pascal’s Triangle.
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int triangle[rows][rows];
    for (i = 0; i < rows; i++) {
        triangle[i][0] = triangle[i][i] = 1;
        for (j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }

       
        printf("\n");
    }

    return 0;
}
