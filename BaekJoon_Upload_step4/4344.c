#include <stdio.h>

int main(void)
{
	int C;
	scanf("%d", &C);
	//<----------�׽�Ʈ ���̽���ŭ �ݺ��� ����----------->
	for (int k = 0; k < C; k++)
	{
		//<--------�л� �� �Է�-------->
		int N;
		scanf("%d", &N);
		//<----------�л� ����ŭ �迭 ���� �� ���� ����----------->
		int N_arr[N] = { 0 };
		int total = 0;
		for (int k = 0; k < N; k++)
		{
			scanf("%d", &N_arr[k]);
			total += N_arr[k];
		}
		//<--------�迭��ҿ� �����Ͽ� ��պ��� ���� ���� ����-------->
		float N_ave = total / N;
		int stu = 0;
		for (int k = 0; k < N; k++)
			if (N_ave < N_arr[k])
				stu++;
		//<---------�л� ���� ��� �� ���--------->
		printf("%.3f%%\n", (float)stu / N * 100);
	}
	return 0;
}