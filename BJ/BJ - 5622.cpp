#include <iostream>
#include <string>

using namespace std;

int dial(char c);

int main()
{
	char c;
	string str;
	int sum = 0, len;
	cin >> str;
	len = str.length();

	for (int i = 0; i < len; i++)
	{
		c = str[i];
		sum += dial(c) + 1;

	}

	cout << sum << endl;



	return 0;
}

int dial(char c)
{
	if (c == 'A' || c == 'B' || c == 'C')
		return 2;
	else if (c == 'D' || c == 'E' || c == 'F')
		return 3;
	else if (c == 'G' || c == 'H' || c == 'I')
		return 4;
	else if (c == 'J' || c == 'K' || c == 'L')
		return 5;
	else if (c == 'M' || c == 'N' || c == 'O')
		return 6;
	else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
		return 7;
	else if (c == 'T' || c == 'U' || c == 'V')
		return 8;
	else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
		return 9;
	else
		return 0;
}