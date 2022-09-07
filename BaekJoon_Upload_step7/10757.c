#include <stdio.h>
#include <string.h>

//<------반환형 없이 저장만 하는 reverse함수의 선언------>
void reverse(char arr[])
{
	int lenght = strlen(arr);
	//<-------짝/홀에 관계없이 몫만 고려해서 횟수의 설정하기------->
	for (int k = 0; k < lenght / 2; k++)
	{
		char word = arr[k];
		arr[k] = arr[lenght - k - 1];
		arr[lenght - k - 1] = word;
	}
}

char A[10005] = { 0 };
char B[10005] = { 0 };
char result[10010] = { 0 };

int main(void)
{
	scanf("%s %s", A, B);

	int len = 0;
	int roundUp = 0;

	reverse(A);
	reverse(B);
	//<---------연산 진행하는 횟수 설정하기 위해 큰 자릿수 파악-------->
	if (strlen(A) > strlen(B))
		len = strlen(A);
	else
		len = strlen(B);
	//<---------더하기 연산 진행 후 새로운 배열에 저장---------->
	for (int k = 0; k < len; k++)
	{
		//<-----문자열로 저장했으므로 숫자로 다시 인식시키기 위해서는 해당 아스키코드만큼 빼 주어야 함--->
		int sum = A[k] - '0' + B[k] - '0' + roundUp;
		//<-------하나의 자릿수가 부족할 경우 NULL=0에서 '0'=48이 더 빠지므로 음수가 나오게 됨------>
		if (sum < 0)
			sum += '0';
		//<------두 자리수가 넘어가면 그 다음에 1을 더해야 함------>
		if (sum > 9)
			roundUp = 1;
		//<------한 자리수로 유지되면 그대로 진행------->
		else
			roundUp = 0;
		//<------최종결과에 저장해야할 것은 한 자리수.또한 아스키코드값으로서 저장해야함------->
		result[k] = sum % 10 + '0';
	}
	//<-----자릿수 같은 것 중 마지막에 올림이 발생할 때------>
	if (roundUp == 1)
		result[len] = '1';

	reverse(result);
	printf("%s\n", result);
	return 0;
}