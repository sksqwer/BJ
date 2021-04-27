
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

//
//
//int main()
//{
//
//	// : source code
//
//	int max, num;
//	int arr[9];
//
//	for (int i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	max = arr[0];
//	num = 1;
//
//	for (int i = 1; i < 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			num = i + 1;
//		}
//	}
//
//	printf("%d\n%d", max, num);
//
//	return 0;
//
//
//}


int main()
{

	// : source code

	int max, num;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);

		if (i == 0)
		{
			max = arr[0];
			num = 1;
		}
		else if (max < arr[i])
		{
			max = arr[i];
			num = i + 1;
		}

	}


	printf("%d\n%d", max, num);

	return 0;


}