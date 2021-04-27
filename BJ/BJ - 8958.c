
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>





int main()
{
	int N, pt, wt, len;

	char OX[80];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{

		pt = 0;
		wt = 0;

		scanf("%s", OX);
		len = strlen(OX);

		for (int j = 0; j < len; j++)
		{
			if (OX[j] == 'O')
			{
				pt += (1 + wt);
				wt++;
			}
			else
				wt = 0;
		}

		printf("%d\n", pt);

	}


	return 0;
}
