#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include "equation.h"
#include "helpfunction.h"
#define CONST 0.001


void linear_equation(double k, double b) {
    if (is_equal(fabs(k), CONST) == 1) {
        printf("x = %lf",-b / k);
    }
    else {
        printf("try again\n");
    }
}

int unlinear_equation(double a, double b, double c, double *x1, double *x2) {

      double d = b * b - 4 * a * c ;
      double sqrt_d = sqrt(d);

      if (d < 0) {
         return 0;
      }
      else if (is_equal(CONST, fabs(d))) {
            *x1 = -b / (2 * a);
            return 1;
      }
           else {

              *x1 = (-b + sqrt_d) / (2 * a);
              *x2 = (-b - sqrt_d) / (2 * a);
              return 2;
            }
}

void quadratic_solve(double a, double b, double c, double *x1, double *x2) {

   int nRoots;

   if (is_a_greater_than_b(fabs(a), CONST) == 0) {
      linear_equation(b, c);
      }

   else {
      nRoots = unlinear_equation(a, b, c, &x1, &x2);
      switch (nRoots) {
         case 0:
            printf("no roots");
            break;
         case 1:
            printf("x = %lf", x1);
            break;
         case 2:
            printf("x1 = %.2lf x2 = %.2lf\n\n", x1, x2);
            break;
         default:
            printf("number of Roots = %d \n\n", nRoots);
            break;
         }
      }

}

