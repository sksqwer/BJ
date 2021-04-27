
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main()
{

	// : source code

	char str[1000000];
	char max_ch;
	bool ch = false;
	int ABC[26], size, max = 0;
	memset(ABC, 0, sizeof(int) * 26);
	scanf("%s", str);

	size = strlen(str);

	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ABC[str[i] - 'A']++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			ABC[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < ABC[i])
		{
			max = ABC[i];
			max_ch = (i + 'A');
			ch = false;
		}
		else if(max == ABC[i])
			ch == true;
	}

	if (ch == false)
	{
		printf("%c\n", max_ch);
	}
	else
		printf("?\n");



	return 0;


}