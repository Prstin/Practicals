#include <stdio.h>

int main() {
    float R;
    float pi = 3.14;
    

    printf("Enter the radius: ");
    scanf("%f", &R);

    float answer = pi * R * R;

    printf("Area of the circle is: %f", answer);
    return 0;




}

