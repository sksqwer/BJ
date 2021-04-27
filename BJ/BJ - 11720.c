
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main()
{

	// : source code

	int N, sum = 0, len;
	char *str;


	scanf("%d", &N);

	str = (char*)malloc(sizeof(char) * N);

	scanf("%s", str);

	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		sum += (int)str[i] - 48;
	}
	printf("%d\n", sum);



	return 0;


}