/*Program to solve a quadratic equation*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2;

    printf("Enter valueS for coefficient of a, b and c : \n");
    scanf("%f %f %f", &a, &b, &c);

    x1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);

    printf("FirstRoot = %f\nSecondRoot = %f", x1, x2);
}