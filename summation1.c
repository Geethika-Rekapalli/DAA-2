#include <stdio.h>
#include <math.h>

int main()
{
    float a, r, n, sum;

    printf("Enter a, r and n: ");
    scanf("%f %f %f", &a, &r, &n);

    if(r == 1)
        sum = a * n;
    else
        sum = a * (pow(r, n) - 1) / (r - 1);

    printf("Sum = %.2f", sum);

    return 0;
}