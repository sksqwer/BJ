#include <iostream>
#include <string>

using namespace std;


int main()
{
	string str;
	int sum = 0;


	getline(cin, str);
	if (str.length() == 0)
		sum = 0;
	int len = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && len > 0)
		{
			len = 0;
			sum++;
		}
		else if (i == (str.length() - 1) && str[i] != ' ')
			sum++;
		else if (str[i] != ' ')
			len++;
		
	}

	cout << sum << endl;



	return 0;
}