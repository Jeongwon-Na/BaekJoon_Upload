#include <stdio.h>
#include <string.h>

char stc[1000001];

int main(void)
{
	//<---------조사할 문자열의 입력----------->
	scanf("%[^\n]s", stc);
	int stcL = strlen(stc);
	int count = 1;
	//<---------공백만 나올 경우-------->
	if (stcL == 1 && stc[0] == 32)
		count = 0;
	else
	{
		//<--------공백으로 시작할 경우-------->
		if (stc[0] == 32)
		{
			for (int i = 1; i < stcL - 1; i++)
				if (stc[i] == 32)
					count++;
		}
		//<---------문자로 시작할 경우---------->
		else
		{
			for (int k = 0; k < stcL - 1; k++)
				if (stc[k] == 32)
					count++;
		}
	}
	printf("%d", count);
	return 0;
}