
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main()
{

	// : source code

	char S[20], P[160];
	int R, T;

	scanf("%d", &T);

	while (T > 0)
	{
		scanf("%d", &R);

		scanf("%s", S);

		for (int i = 0; i < strlen(S); i++)
		{
			for (int j = 0; j < R; j++)
			{
				P[R * i + j] = S[i];
			}
		}
		P[strlen(S) * R] = 0;

		printf("%s\n", P);



		T--;
	}





	return 0;


}