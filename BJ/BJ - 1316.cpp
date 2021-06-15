#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	const int ABC = 26;
	int arr[ABC], n, sum = 0;
	bool ch = true;
	string * str;
	cin >> n;
	str = new string[n];
	for(int i = 0; i < n; i++)
		cin >> str[i];
	for (int i = 0; i < n; i++)
	{
		int len = str[i].length();
		ch = true;
		memset(arr, 0, sizeof(int) * ABC);

		for (int j = 0; j < len; j++)
		{
			if (arr[str[i][j] - 'a'] == 0)
				arr[str[i][j] - 'a']++;
			else
			{
				if (str[i][j] != str[i][j - 1])
					ch = false;	
			}
		}
		if (ch == true)
			sum++;

	}

	cout << sum << endl;

	return 0;
}

