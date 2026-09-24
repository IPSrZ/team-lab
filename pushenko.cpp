#include "pushenko.h"
#include <cmath>

double rectangleArea(double a, double b) {
    return a * b;
}

double rectanglePerimeter(double a, double b) {
    return 2 * (a + b);
}

double rectangleDiagonal(double a, double b) {
    return sqrt(a * a + b * b);
}
