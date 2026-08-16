#include <stdio.h>
int main()
{
    float a, r, sum = 0;
    int n, i;

    printf("Enter a, r and n: ");
    scanf("%f %f %d", &a, &r, &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + a;
        a = a * r;
    }

    printf("Sum = %.2f", sum);

    return 0;
}