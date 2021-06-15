#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int sum = 0, len;
	cin >> str;
	len = str.length();

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '=' || str[i] == '-')
		{
			if (i > 1)
				if (str[i - 1] == 'z' && str[i - 2] == 'd')
					sum--;
			continue;
		}
		else if (str[i] == 'j' && i > 0)
		{
			if (str[i - 1] == 'l' || str[i - 1] == 'n')
				continue;
			else
				sum++;
		}
		else
			sum++;

	}

	cout << sum << endl;



	return 0;
}