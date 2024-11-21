#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Nhap nhiet do theo do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuyen tu Celsius sang Fahrenheit
    fahrenheit = celsius * 9 / 5 + 32;

    // Hien thi ket qua
    printf("Nhiet do %.2f do Celsius tuong duong %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

