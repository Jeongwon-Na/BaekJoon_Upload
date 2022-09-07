#include <stdio.h>

int main(void)
{
	int Hour, Min, fHour, fMin;

	scanf("%d %d", &Hour, &Min);

	if (Min >= 45)     //45분보다 같거나 클 때
	{
		fMin = Min - 45;
		printf("%d %d", Hour, fMin);
	}
	else      //0보다 크고 45보다 작은 수 입력받을 때
	{
		fMin = 60 - (45 - Min);
		if (Hour == 0)
			fHour = 23;
		else
			fHour = Hour - 1;
		printf("%d %d", fHour, fMin);
	}
	return 0;
}