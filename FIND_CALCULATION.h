#ifndef FIND_CALCULATION_H
#define FIND_CALCULATION_H

double find_Sqrt(double number) {
    double error = 0.000001; 
    double s = number;
    
    while ((s - number / s) > error) { 
        s = (s + number / s) / 2;
    }
    return s;
}

double find_Cube(double number) {
    return number * number * number;
}

double find_Pow(double base, double exponent) {
    double result = 1;
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    return result;
}
#endif
