#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include "equation.h"
#include "helpfunction.h"
#define CONST 0.001

enum TYPES_OF_SOLUTIOUNS
{
    INF_ROOTS = -1,
    NO_ROOTS = 0,
    ONE_ROOT = 1,
    TWO_ROOTS = 2
};

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

void output(int nRoots, double x1, double x2) {
    switch (nRoots) {
    case INF_ROOTS: 
        printf("try again\n\n");
    case NO_ROOTS:
        printf("no roots\n");
        break;
    case ONE_ROOT:
        printf("x = %lf\n", x1);
        break;
    case TWO_ROOTS:
        printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);
        break;
    default:
        printf("number of Roots = %d \n", nRoots);
        break;
    }
}
