#include <stdio.h>
#include <string.h>

int main(void)
{
	char S[100];
	scanf("%s", S);
	//<----alpha배열의 -1로의 저장------>
	int alpha[26];
	for (int k = 0; k < 26; k++)
		alpha[k] = -1;
	//<------문자열 각각의 요소에 해당하는 alpha의 인덱스값 접근하여 S배열에서의 인덱스값을 저장시킴------>
	for (int k = 0; S[k] != '\0'; k++)
		if (alpha[S[k] - 'a'] == -1)
			alpha[S[k] - 'a'] = k;
	//<---------alpha배열에 저장된 값 출력--------->
	for (int k = 0; k < 26; k++)
		printf("%d ", alpha[k]);

	return 0;
}