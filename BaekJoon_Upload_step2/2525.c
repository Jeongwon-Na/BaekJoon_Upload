#include <stdio.h>

int main(void)
{
	int nowH, nowM, needM;
	scanf("%d %d", &nowH, &nowM);
	scanf("%d", &needM);

	int useM = needM + nowM;
	int plusH = useM / 60;
	int resultH = nowH + plusH;
	int finalM = useM % 60;

	int finalH = resultH % 24;
	printf("%d %d", finalH, finalM);
	return 0;
}