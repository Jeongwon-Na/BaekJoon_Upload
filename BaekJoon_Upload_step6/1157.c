#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	scanf("%s", word);
	int lWord = strlen(word);
	//<------소문자를 대문자의 아스키 코드로 전환------->
	for (int k = 0; k < lWord; k++)
		if (word[k] > 96 && word[k] < 123)
			word[k] -= 32;
	//<--------출현 횟수를 저장하는 배열의 설정-------->
	int alpha[26] = { 0 };
	for (int k = 0; k < lWord; k++)
		alpha[word[k] - 'A'] += 1;
	//<------alpha 배열요소 검사하며 최댓값 추출------>
	int max = 0;
	for (int k = 0; k < 26; k++)
		if (alpha[k] > max)
			max = alpha[k];
	//<------max가 저장된 처음의 배열값 추출------>
	int i;
	for (i = 0; i < 26; i++)
		if (alpha[i] == max)
			break;
	//<--------max와 동일한 값이 있는지 확인------->
	for (int m = i + 1; m < 26; m++)
	{
		//<------중복인 경우 ?의 출력------>
		if (alpha[m] == max)
		{
			printf("?");
			return 0;
		}
	}
	//<------중복이 없을 경우 알파벳의 출력----->
	printf("%c", i + 65);
	return 0;
}