
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
//#include "stdbool.h"




int main()
{

	// : source code

	int N = 0, min = 0, max = 0;
	int arr[1000000] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			min = arr[0];
			max = arr[0];
		}
		else
		{
			if (max < arr[i])
				max = arr[i];
			else if (min > arr[i])
				min = arr[i];
		}
	}

	printf("%d %d", min, max);





	return 0;


}