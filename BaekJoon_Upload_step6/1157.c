#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	scanf("%s", word);
	int lWord = strlen(word);
	//<------�ҹ��ڸ� �빮���� �ƽ�Ű �ڵ�� ��ȯ------->
	for (int k = 0; k < lWord; k++)
		if (word[k] > 96 && word[k] < 123)
			word[k] -= 32;
	//<--------���� Ƚ���� �����ϴ� �迭�� ����-------->
	int alpha[26] = { 0 };
	for (int k = 0; k < lWord; k++)
		alpha[word[k] - 'A'] += 1;
	//<------alpha �迭��� �˻��ϸ� �ִ� ����------>
	int max = 0;
	for (int k = 0; k < 26; k++)
		if (alpha[k] > max)
			max = alpha[k];
	//<------max�� ����� ó���� �迭�� ����------>
	int i;
	for (i = 0; i < 26; i++)
		if (alpha[i] == max)
			break;
	//<--------max�� ������ ���� �ִ��� Ȯ��------->
	for (int m = i + 1; m < 26; m++)
	{
		//<------�ߺ��� ��� ?�� ���------>
		if (alpha[m] == max)
		{
			printf("?");
			return 0;
		}
	}
	//<------�ߺ��� ���� ��� ���ĺ��� ���----->
	printf("%c", i + 65);
	return 0;
}