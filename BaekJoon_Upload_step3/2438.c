#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);  //별 출력할 줄의 개수 

	for (int i = 0; i < num; i++)  //num번 반복. 외부 반복(전체 줄바꿈 개수)
	{
		for (int m = 0; m <= i; m++)  //내부 반복(한 줄 출력 개수)
			printf("*");
		printf("\n");
	}
	return 0;
}