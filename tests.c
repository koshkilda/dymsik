#include <stdio.h>
#include <math.h>
#include "equation.h"
#include "tests.h"
#include "helpfunction.h"
#define CONST 0.001

double expected_sum_Roots(double a, double b) {
   return a + b;
}

double real_sum_Roots(double a, double b, double c, double x1, double x2) {
    quadratic_solve(a, b, c, x1, x2);
    return x1 + x2;
}

double expected[9] = {expected_sum_Roots(0, 0), expected_sum_Roots(0, 0), expected_sum_Roots(2, 0), expected_sum_Roots(-1, 0), expected_sum_Roots(0, 0), expected_sum_Roots(-1, -4), expected_sum_Roots(-0.38, -2.62), /*expected_sum_Roots(0, 0), expected_sum_Roots(0, 0)};*/

double real[9] = {real_sum_Roots(0, 0, 0), real_sum_Roots(0, 0, 3), real_sum_Roots(0, -3, 6), real_sum_Roots(1, 2, 1), real_sum_Roots(5, 1, 4), real_sum_Roots(1, 5, 4), real_sum_Roots(1, 3, 1), /* real_sum_Roots(1, 1000000, 1), real_sum_Roots(hello)}; */

void TestSum() {
   for (int i = 0; i < 9, i++) {
      if (is_equal(expected[i], real[i]) == 0) {
         printf("error in test %d", i);
      }
   }
}
