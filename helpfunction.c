#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include "equation.h"
#include "helpfunction.h"
#define CONST 0.001

int is_it_right_or_wrong(int nEntered_symbols) {
    if (nEntered_symbols < 3) {
        printf("error");
        while (getchar() != '\n');
        return 0;
    }
    else {
        return 1;
    }
}

int is_a_greater_than_b(double a, double b) {
    if (a > b)
        return 1;
    else return 0;
}

void input(double* a, double* b, double* c) {

    int nEntered_symbols = scanf("%lf %lf %lf", a, b, c);

    if (isinf(*a) != 0) {
        printf("error");
    }
    if (isinf(*b) != 0) {
        printf("error");
    }
    if (isinf(*c) != 0) {
        printf("error");
    }

    assert(&a != NULL);
    assert(&b != NULL);
    assert(&c != NULL);


    while (is_it_right_or_wrong(nEntered_symbols) != 1) {
        printf("try again\n");
    }
}

int is_equal(double a, double b) {
    if (fabs(a - b) < CONST) {
        return 1;
    }
    else {
        return 0;
    }
}
