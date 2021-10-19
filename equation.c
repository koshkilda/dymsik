#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include "equation.h"
#include "helpfunction.h"
#define CONST 0.001

int square_solver(double a, double b, double c, double *x1, double *x2) {

    if (is_equal(fabs(a), 0) == 1) {
        if (is_equal(fabs(b), 0) == 0) {
            *x1 = -c / b;
            return 1;
        }
        else {
            return -1;
        }
    }
    else {
        double d = b * b - 4 * a * c;
        double sqrt_d = sqrt(d);

        if (d < 0) {
            return 0;
        }
        else if (is_equal(0, fabs(d)) == 1) {
            *x1 = -b / (2 * a);
            return 1;
        }
        else {

            *x1 = (-b + sqrt_d) / (2 * a);
            *x2 = (-b - sqrt_d) / (2 * a);
            return 2;
        }
    }
}
