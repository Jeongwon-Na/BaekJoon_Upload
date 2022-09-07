#include <stdio.h>

int main(void)
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	int total;
	//<-----위에서부터 A만큼 까고 시작하기------->
	//<-----나누어 떨어지는 경우, 그대로 반영하고 마지막 1일만 고려----->
	if ((V - A) % (A - B) == 0)
		total = (V - A) / (A - B) + 1;
	//<----나누어 떨어지지 않는 경우, 그 부분도 1일로 고려하고 마지막 1일도 추가로 고려---->
	else
		total = (V - A) / (A - B) + 2;
	printf("%d", total);
	return 0;
}