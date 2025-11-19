#include <stdio.h>

int main() {
    int F;
    float C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &F);

    C = (F - 32) * 5.0 / 9.0;

    printf("Celsius: %.2f\n", C);

    return 0;
}		