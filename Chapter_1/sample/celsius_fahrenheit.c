#include <stdio.h>

int main() {
    float fahr, celsius, lower, upper, step;

    lower = -20;
    upper = 100;
    step = 6;

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        printf("%7.2f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}