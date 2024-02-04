#include <stdio.h>

int main() {
    float R;
    float pi = 3.14;
    

    printf("The radius of the Circle is: ");
    scanf("%f", &R);


    float sum = 2 * pi * R;

    printf("The Circumference of the circle is: %f", sum);
    return 0;



}