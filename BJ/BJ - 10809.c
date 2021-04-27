
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main()
{

	// : source code

	int arr[26];
	memset(arr, -1, sizeof(int) * 26);
	char str[100];

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++)
	{
		if (arr[str[i] - 97] == -1)
			arr[str[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", arr[i]);


	return 0;


}