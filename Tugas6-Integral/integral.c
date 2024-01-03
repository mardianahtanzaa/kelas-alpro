#include <stdio.h>

double f(double x) {
    return 4*x-7;
}
double integral(double a, double b, int n) {
    double h = (b - a) / n; 
    double result = 0;

    for (int i = 0; i < n; i++) {
        double  x1 = a + i * h;
        double  x2 = a + (i + 1) * h;
        double  y1 = f(x1);
        double  y2 = f(x2);
        result += (y1 + y2) * h / 2;   
    }

    return result;
}
