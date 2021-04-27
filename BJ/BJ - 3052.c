
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"



int main()
{

	// : source code

	int num, res = 0;
	int arr[42] = { 0 };


	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);

		arr[num % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] > 0)
			res++;
	}

	printf("%d", res);

	return 0;


}