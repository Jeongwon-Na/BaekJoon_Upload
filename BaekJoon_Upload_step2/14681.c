#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	int y;
	scanf("%d", &y);

	if (x > 0 && y > 0)
		printf("1");
	else if (x > 0 && y < 0)
		printf("4");
	else if (x < 0 && y>0)
		printf("2");
	else
		printf("3");
	return 0;
}