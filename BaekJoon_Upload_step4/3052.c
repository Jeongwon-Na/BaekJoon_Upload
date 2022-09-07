#include <stdio.h>

int main(void)
{
	int num;
	int arr[42] = { 0 };  //나머지로 가능한 0부터 41까지의 배열 생성
	for (int k = 0; k < 10; k++)
	{
		scanf("%d", &num);  //나머지 검사할 num 입력받기
		arr[num % 42]++;   //나머지에 해당하는 순서의 배열이 후행증가.
	}
	//<-------배열요소 하나씩 접근해서 0이 아니면 증가하는 형식------>
	int remain = 0;
	for (int m = 0; m < 42; m++)
	{
		if (arr[m] != 0)
			remain++;
	}
	printf("%d", remain);
	return 0;
}