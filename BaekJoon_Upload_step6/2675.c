#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, R;
	scanf("%d", &T);
	char S[20];
	//<-------���Լ�: T��ŭ ��ü �ݺ�------->
	for (int k = 0; k < T; k++)
	{
		scanf("%d %s", &R, S);
		//<-------���Լ�1: ���ڿ� ���̸�ŭ �ݺ� ����-------->
		for (int i = 0; i < strlen(S); i++)
			//<--------���Լ�2: R��ŭ �ݺ� ���---------->
			for (int k = 0; k < R; k++)
				printf("%c", S[i]);
		printf("\n");
	}
	return 0;
}