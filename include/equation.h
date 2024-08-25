#pragma once

//#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "helpfunction.h"
#include "test.h"

enum TYPES_OF_SOLUTIOUNS {
    INF_ROOTS = -1,
    NO_ROOTS  = 0,
    ONE_ROOT  = 1,
    TWO_ROOTS = 2
};

int linear_equation(double k, double b, double* x1);

int unlinear_equation(double a, double b, double c, double* x1, double* x2);

int square_solver(double a, double b, double c, double* x1, double* x2);