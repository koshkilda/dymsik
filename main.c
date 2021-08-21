/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a == 0) 
      printf("уравнение не является квадратным");
    else if ((b * b - 4 * a * c) < 0) 
        printf("уравнение не имеет корней");
      else if ((b * b - 4 * a * c) == 0)
          printf("%f",-b / (2 * a));
        else printf("%f %f", (-b + sqrt(b * b - 4 * a * c)) / (2 * a), (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
    return 0;
}
      
