#include <stdio.h>
#include <string.h>

char stc[1000001];

int main(void)
{
	//<---------������ ���ڿ��� �Է�----------->
	scanf("%[^\n]s", stc);
	int stcL = strlen(stc);
	int count = 1;
	//<---------���鸸 ���� ���-------->
	if (stcL == 1 && stc[0] == 32)
		count = 0;
	else
	{
		//<--------�������� ������ ���-------->
		if (stc[0] == 32)
		{
			for (int i = 1; i < stcL - 1; i++)
				if (stc[i] == 32)
					count++;
		}
		//<---------���ڷ� ������ ���---------->
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