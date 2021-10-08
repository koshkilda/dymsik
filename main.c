#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include "equation.h"
#include "helpfunction.h"


int main() {

    printf("Solve quadratic equation\n"
        "2021\n\n");

    int finish_or_not = 1;

    while (finish_or_not != 0) {

        printf("Enter a, b, c: ");

        double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
        input(&a, &b, &c);

        quadratic_solve(a, b, c, x1, x2);

        printf("Enter 0 if you want to finish\n");
        scanf("%d", &finish_or_not);
    }
    return 0;
}
