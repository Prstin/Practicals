#include <stdio.h>

int main() {
    float R;
    float pi = 3.14;
    
    printf("Enter Radius: ");
    scanf("%f", &R);
    
    float Circumference = 2 * pi * R;
    float Area = pi * R * R;
    
    printf("Circumference of the circle is: %.3f", Circumference);
    printf("\nArea of the circle is: %.3f", Area);
    
    return 0;
    
}