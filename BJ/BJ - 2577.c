
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"


int main()
{

	// : source code

	int A, B, C, sum;

	int arr[10] = { 0 };

	scanf("%d %d %d", &A, &B, &C);

	sum = A * B * C;

	while (sum > 0)
	{
		arr[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	return 0;


}