
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{

	// : source code
	bool ch[100000];
	for (int i = 0; i <= 10000; i++)
	{
		ch[i] = true;
	}



	for (int i = 1; i <= 10000; i++)
	{
		int num = i, num1, num2, num3, num4, num5, d;
		num5 = num % 10;
		num /= 10;
		num4 = num % 10;
		num /= 10;
		num3 = num % 10;
		num /= 10;
		num2 = num % 10;
		num /= 10;
		num1 = num % 10;

		d = i + num1 + num2 + num3 + num4 + num5;
		ch[d] = false;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (ch[i] == true)
			printf("%d\n", i);
	}


	return 0;


}