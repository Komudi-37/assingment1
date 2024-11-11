//WAP to accept a coordinate point in an XY coordinate system and determine in which 
//quadrant the coordinate point lie
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
