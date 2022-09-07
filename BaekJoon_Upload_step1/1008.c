#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    double n1, n2;
    n1 = (double)num1;
    n2 = (double)num2;
    printf("%.10f", n1 / n2);
    return 0;
}