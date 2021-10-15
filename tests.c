#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include "equation.h"
#include "helpfunction.h"
#include "tests.h"
#define CONST 0.001

enum TYPES_OF_SOLUTIOUNS
{
	INF_ROOTS = -1,
	NO_ROOTS = 0,
	ONE_ROOT = 1,
	TWO_ROOTS = 2
};

int test() {
	int flag = 1;

	int nRoots;

	nRoots = square_solver(1, -4, 4, 0, 0);
	if (nRoots != ONE_ROOT) {
		flag = 0;
	}

	nRoots = square_solver(1, -5, 4, 0, 0);
	if (nRoots != TWO_ROOTS) {
		flag = 0;
	}

	nRoots = square_solver(5, -1, 4, 0, 0);
	if (nRoots != NO_ROOTS) {
		flag = 0;
	}

	nRoots = square_solver(0, 2, 4, 0, 0);
	if (nRoots != ONE_ROOT) {
		flag = 0;
	}	

	nRoots = square_solver(0, 0, 4, 0, 0);
	if (nRoots != INF_ROOTS) {
		flag = 0;
	}

	return flag;
}
