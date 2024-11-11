//WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per 
//user’s choice
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
