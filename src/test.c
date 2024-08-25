#include "../include/equation.h"


int test() {
	int flag = 1;
	double a, b, c, x1, x2;

	double x1_check, x2_check;
	int nRoots_check;

	FILE *fp = fopen("tests.csv", "r");
	if (fp == NULL) {
		printf("Cannot open file.");
		return 0;
	}

	while(!feof(fp)) {
		x1 = 0;
		x2 = 0;
		
		fscanf(fp, "%lf ; %lf ; %lf ; %lf ; %lf ; %d", &a, &b, &c, &x1_check, &x2_check, &nRoots_check);

		int nRoots = square_solver(a, b, c, &x1, &x2);
		if (nRoots != nRoots_check) {
			printf("%lf %lf %lf\n", a, b, c);
			flag = 0;
		}

		if (!is_equal(x1, x1_check)) {
			printf("%lf %lf %lf %lf %lf %lf %lf\n", a, b, c, x1, x2, x1_check, x2_check);
			flag = 0;
		}

		if (!is_equal(x2, x2_check)) {
			printf("%lf %lf %lf %lf %lf %lf %lf\n", a, b, c, x1, x2, x1_check, x2_check);
			flag = 0;
		}
	}

	fclose(fp);
	return flag;
}


/* 100500 способов прочитать файл

		fread(str, sizeof str[0], 8, fp);

		fgets(str, 8, fp); 
} */

/* double str_to_double(char str[]) {
	double d = 0;
	int point = 240;

	
		for (int i = 0; i < 240; i++) {
			if (str[i] != '.' || str[i] < '0' || str[i] > '9') 
				return d;
			
			else if (str[i] == '.') 
				point = i;
			
			else if (i < point) 
				d += dec(str[i], i, point);
			
			else d += post(str[i], i, point);
		}
	//}
}

double dec (char str, int i, int point) {
	int order;
	order = point - i;
	printf("%c \n", str);

	double d = (str - '0') * (double)order;
    return d;
}

double post (char str, int i, int point) {
	int order;
	order = i - point;

	double d = (str - '0') * (double)order;
    return d;
	typedef(d);
} */