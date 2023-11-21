#include <stdio.h>
#include <windows.h>
#include "temp.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double celsius;

    printf("Podaj temperaturę w stopniach Celsiusza: ");

    if (scanf("%lf", &celsius) != 1) {
        printf("Błąd! Wprowadź poprawną liczbę.\n");
        return 0;
    }

    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin = celsiusToKelvin(celsius);

    printf("\nTemperatura w stopniach Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperatura w Kelwinach: %.2f\n", kelvin);
    printf("Opis warunków pogodowych: %s\n", weatherDescription(celsius));

    return 0;
}