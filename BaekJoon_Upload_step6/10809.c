#include <stdio.h>
#include <string.h>

int main(void)
{
	char S[100];
	scanf("%s", S);
	//<----alpha�迭�� -1���� ����------>
	int alpha[26];
	for (int k = 0; k < 26; k++)
		alpha[k] = -1;
	//<------���ڿ� ������ ��ҿ� �ش��ϴ� alpha�� �ε����� �����Ͽ� S�迭������ �ε������� �����Ŵ------>
	for (int k = 0; S[k] != '\0'; k++)
		if (alpha[S[k] - 'a'] == -1)
			alpha[S[k] - 'a'] = k;
	//<---------alpha�迭�� ����� �� ���--------->
	for (int k = 0; k < 26; k++)
		printf("%d ", alpha[k]);

	return 0;
}