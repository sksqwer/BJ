
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

long long sum(int *a, int n);

int main()
{

	// : source code
	int arr[3000000], n;

	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("%lld", sum(arr, n));




	return 0;


}


long long sum(int *a, int n)
{
	long long res = 0;
	for (int i = 0; i < n; i++)
	{
		res += a[i];
	}


	return res;
}

