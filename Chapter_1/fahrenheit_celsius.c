#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        // if we use 5/9 then the result would be 0 as int 5 / int 9 = int 0.
        // If arithmetic operator has both int argument -> integer operation is executed
        // If arithmetic operator has int & float -> int is converted to float and then operation is executed
        printf("%3.0f\t\t%6.2f\n", fahr, celsius);
        // 6.2f - at least 6 character wide, 2 decimal points
        fahr = fahr + step;
    }
}