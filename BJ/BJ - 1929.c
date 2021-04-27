
//
//#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "stdbool.h"
//
//// 백준 1929번
//
//
//int main()
//{
//
//	// : source code
//
//	int num1, num2, i, j, pt = -1;
//	int arr[100000];
//	arr[0] = 2;
//
//
//
//	scanf("%d %d", &num1, &num2);
//
//	for (i = 2; i <= num2; i++)
//	{
//		int ch = 0;
//
//		for (j = 0; j <= pt; j++)
//		{
//			if (i % arr[j] == 0)
//			{
//				ch = 1;
//				break;
//			}
//		}
//
//		if (ch == 0)
//		{
//			pt++;
//			arr[pt] = i;
//			printf("%d\n", arr[pt]);
//
//		}
//		if(i != 2)
//			i++;
//
//	}
//
//	printf("%d", pt);
//
//
//	return 0;
//
//
//}
//


#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdbool.h"


int main()
{

	// : source code

	bool arr[1000000];
	int num1, num2;


	scanf("%d %d", &num1, &num2);

	for (int i = 0; i <= num2; i++)
		arr[i] = true;

	if (num1 == 1)
		num1 = 2;

	for (int i = 2; (i * i) <= num2; i++)
	{
		if (arr[i])
		{
			for (int j = (i + i); j <= num2; j += i)
				arr[j] = false;

		}
	}
	for (int i = num1; i <= num2; i++)
		if (arr[i])
			printf("%d\n", i);


	return 0;


}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "stdbool.h"
//
//// 백준 1929번
//
//
//int main()
//{
//
//	// : source code
//
//	int num1, num2, pt = -1;
//	int arr2[100000];
//	arr2[0] = 2;
//
//	bool arr[1000000];
//
//
//
//	scanf("%d %d", &num1, &num2);
//
//	for (int i = 2; i <= num2; i++)
//	{
//		int ch = 0;
//
//		for (int j = 0; j <= pt; j++)
//		{	
//			if (i % arr2[j] == 0)
//			{
//				ch = 1;
//				break;
//			}
//		}
//
//		if (ch == 0)	
//		{
//			pt++;
//			arr2[pt] = i;
//
//		}
//		if(i != 2)
//			i++;
//
//	}
//
//	printf("%d", pt);
//
//
//
//
//	if (num1 == 1)
//		num1 = 2;
//
//	for (int i = num1; i <= num2; i++)
//		arr[i] = true;
//
//	for (int i = 2; i * i <= num2; i++)
//	{
//		if (arr[i])
//		{
//			for (int j = i * i; j <= num2; j += i)
//				arr[j] = false;
//
//		}
//	}
//	int n = 0;
//
//	for (int i = num1; i <= num2; i++)
//		if (arr[i])
//			n++;
////			printf("%d\n", i);
//
//	printf("%d\n", n);
//	printf("%d %d \n", num1, num2);
//
//	return 0;
//
//
//}
