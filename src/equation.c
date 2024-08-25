#include "../include/equation.h"


int linear_equation(double k, double b, double* x1) { //функция для решения линейного уравнения

    assert(x1 != NULL);
    
    if (!is_equal(k, 0)) {
        *x1 = -b / k;
        return  ONE_ROOT;
    }
    else if (is_equal(b, 0))
        return INF_ROOTS;
    else 
        return NO_ROOTS;
}


int unlinear_equation(double a, double b, double c, double* x1, double* x2) { //функция для решения нелинейного уравнения

    assert(x1 != NULL);
    assert(x2 != NULL);

    double d = b * b - 4 * a * c;

    if (d < 0)
        return 0;
    else {
        double sqrt_d = sqrt(d);
        double denominator = 1 / (2 * a);

        if (is_equal(d, 0)) {
            *x1 = -b * denominator;
            return ONE_ROOT;
        }
        else {
            *x1 = (-b + sqrt_d) * denominator; 
            *x2 = (-b - sqrt_d) * denominator;
            return TWO_ROOTS;
        }
    }
}


int square_solver(double a, double b, double c, double* x1, double* x2) {

    assert(x1 != NULL);
    assert(x2 != NULL);

    double x1_ss = *x1;
    double x2_ss = *x2;
    int nRoots = -5;
    
    if (is_equal(a, 0)) 
        nRoots = linear_equation(b, c, &x1_ss);
    else 
        nRoots = unlinear_equation(a, b, c, &x1_ss, &x2_ss);

    *x1 = x1_ss;
    *x2 = x2_ss;

    return nRoots;
}