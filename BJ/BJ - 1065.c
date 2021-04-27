
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"


int main()
{

	// : source code

	int N, ans;

	scanf("%d", &N);

	if (N < 100)
		ans = N;
	else
	{
		ans = 99;
		int num1, num2, num3;

		for(int i = 111; i <= N; i++)
		{
			num1 = i / 100;
			num2 = (i / 10) % 10;
			num3 = (i % 10);

			if (num3 == (num2 + num2 - num1))
				ans++;


		}

	}

	printf("%d", ans);




	return 0;


}