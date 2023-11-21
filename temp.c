#include "temp.h"

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

const char* weatherDescription(double celsius) {
    if (celsius < 0) {
        return "Bardzo zimno";
    } else if (celsius < 10) {
        return "Chłodno";
    } else if (celsius <25) {
        return "Umiarkowane";
    } else if (celsius < 35) {
        return "Ciepło";
    } else if (celsius > 35) {
        return "Bardzo Gorąco";
    }
}
