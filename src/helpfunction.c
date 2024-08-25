#include "../include/equation.h"
const double EPSILON = 0.001;


int correct_args_num(int nEntered_symbols) { // ПЕРЕИМЕНОВАТЬ
    if (nEntered_symbols < 3) {
        printf("error, enter 3 NUMBERS, use . for fractional numbers\n");
        while (getchar() != '\n');
        return 0;
    }
    else
        return 1;
}


int is_equal(double a, double b) {
    if (fabs(a - b) < EPSILON) 
        return 1;
    else 
        return 0;
}


int input(double* a, double* b, double* c) {

    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);

    printf("Enter a, b, c: ");
    int nEntered_symbols = scanf("%lf %lf %lf", a, b, c);

    if (isinf(*a) != 0 ||
        isinf(*b) != 0 ||
        isinf(*c) != 0) {
            printf("error, arguments are infinity\n");  
            return 0; 
        }

    while (!correct_args_num(nEntered_symbols)) {
        printf("try again\n");
        return 0;
    }

    return 1;
}


void output(int nRoots, double x1, double x2) {
    switch (nRoots) {
        case INF_ROOTS: 
            printf("infinity number of roots, try again\n\n");
            break;
        case NO_ROOTS:
            printf("no roots\n");
            break;
        case ONE_ROOT:
            printf("x = %.2lf\n", x1);
            break;
        case TWO_ROOTS:
            printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);
            break;
        default:
            printf("error: unknown number of roots = %d \n", nRoots);
            break;
    }
}