#include <stdio.h>

int main(void)
{
	int C;
	scanf("%d", &C);
	//<----------테스트 케이스만큼 반복문 진행----------->
	for (int k = 0; k < C; k++)
	{
		//<--------학생 수 입력-------->
		int N;
		scanf("%d", &N);
		//<----------학생 수만큼 배열 생성 후 성적 저장----------->
		int N_arr[N] = { 0 };
		int total = 0;
		for (int k = 0; k < N; k++)
		{
			scanf("%d", &N_arr[k]);
			total += N_arr[k];
		}
		//<--------배열요소에 접근하여 평균보다 높은 성적 추출-------->
		float N_ave = total / N;
		int stu = 0;
		for (int k = 0; k < N; k++)
			if (N_ave < N_arr[k])
				stu++;
		//<---------학생 비율 계산 후 출력--------->
		printf("%.3f%%\n", (float)stu / N * 100);
	}
	return 0;
}