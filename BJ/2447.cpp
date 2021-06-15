#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string *str;
void star(int, int, bool, bool);

int main()
{
	long long N;
	cin >> N;

	str = new string[N];

	star(N, 0, true, true);
	for (int i = 0; i < N; i++)
		cout << str[i] << endl;

	return 0;
}

void star(int n, int itr, bool ch, bool ch2)
{
	int m = n / 3;
	if (n == 1)
	{
		if (!ch2)
			str[itr] += " ";
		else if (ch)
			str[itr] += "*";
		else
			str[itr] += " ";
	}
	else if(ch2)
	{
		for (int i = 0; i < 9; i++)
		{
			if(i==4)
				star(m, itr + ((i / 3)*m), false, false);
			else
				star(m, itr + ((i / 3)*m), true, ch2);
		}
	}
	else
	{
		for(int i = 0; i < 9; i++)
			star(m, itr + ((i / 3)*m), false, false);
	}
	
}