#include <stdio.h>

int main() {
    float Celcius;
    float Fahrenheit;

    printf("Enter Celcius value: ");
    scanf("%f", &Celcius);

    float answer = 9.0/5.0 * Celcius + 32;
    printf("The value in Farhenheit is: %.2f", answer);
    return 0;



}