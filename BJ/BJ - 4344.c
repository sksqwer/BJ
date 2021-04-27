
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






int main()
{
	int C, N;
	double arr[1000];

	scanf("%d", &C);


	for (int i = 0; i < C; i++)
	{
		double avg_num = 0, tot_num = 0, sum = 0, pt, avg;

		scanf("%d", &N);

		for (int j = 0; j < N; j++)
		{
			scanf("%lf", &pt);
			arr[j] = pt;

			sum += pt;
			tot_num++;
		}
		avg = sum / tot_num;
		for (int j = 0; j < N; j++)
		{
			if (arr[j] > avg)
				avg_num++;

		}

		printf("%.3lf%%\n", avg_num / tot_num * 100);


	}



	return 0;

}
