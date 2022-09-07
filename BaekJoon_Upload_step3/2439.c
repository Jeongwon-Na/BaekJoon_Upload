#include <stdio.h>

int main(void)
{
	int Num;
	scanf("%d", &Num);
	//<------외부 반복(전체 줄바꿈 개수)------>
	for (int i = 1; i <= Num; i++)
	{
		//<------내부 반복1 (줄 하나 당 공백 출력)------>
		for (int bNum = Num - i; bNum > 0; bNum--)
			printf(" ");
		//<------내부 반복2 (줄 하나 당 별 출력)------>
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
}