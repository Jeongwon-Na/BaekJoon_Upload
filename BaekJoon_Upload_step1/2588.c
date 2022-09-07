#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int num3, num4, num5, num6;
    num3 = ((num2 % 100) % 10) * num1;
    num4 = (((num2) % 100) / 10) * num1;
    num5 = (num2 / 100) * num1;
    num6 = num3 + 10 * num4 + 100 * num5;

    printf("%d\n", num3);
    printf("%d\n", num4);
    printf("%d\n", num5);
    printf("%d\n", num6);
    return 0;
}