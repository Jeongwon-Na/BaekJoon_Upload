#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if (year % 4 == 0)  //4의 배수일 때
	{
		if (year % 400 == 0)  //400의 배수일 때=윤년임
			printf("1");
		else if (year % 100 != 0)  //100의 배수가 아닐 때=윤년임
			printf("1");
		else  //4의 배수이고 100의 배수임=윤년이 아님
			printf("0");
	}
	else  //4의 배수가 아닐 때=윤년이 아님
		printf("0");
	return 0;
}