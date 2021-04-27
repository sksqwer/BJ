
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"



int main()
{

	// : source code

	int N, max;
	double avg, sum = 0;
	double arr[1000];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &arr[i]);

		if (i == 0)
			max = arr[i];
		else if (max < arr[i])
			max = arr[i];

	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	avg = sum / (double)N;

	printf("%lf", avg);


	return 0;


}