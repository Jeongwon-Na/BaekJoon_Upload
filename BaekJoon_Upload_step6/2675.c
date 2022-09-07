#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, R;
	scanf("%d", &T);
	char S[20];
	//<-------겉함수: T만큼 전체 반복------->
	for (int k = 0; k < T; k++)
	{
		scanf("%d %s", &R, S);
		//<-------속함수1: 문자열 길이만큼 반복 실행-------->
		for (int i = 0; i < strlen(S); i++)
			//<--------속함수2: R만큼 반복 출력---------->
			for (int k = 0; k < R; k++)
				printf("%c", S[i]);
		printf("\n");
	}
	return 0;
}