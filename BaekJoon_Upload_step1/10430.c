#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int num1 = (A + B) % C;
    int num2 = ((A % C) + (B % C)) % C;
    int num3 = (A * B) % C;
    int num4 = ((A % C) * (B % C)) % C;
    printf("%d\n%d\n%d\n%d\n", num1, num2, num3, num4);
    return 0;
}