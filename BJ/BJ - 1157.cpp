#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { 0 };
	string str;
	bool ch = false;

	cin >> str;

	for(int i = 0; i < str.length(); i++)
	{
		if (str[i] - 'a' < 0)
			arr[str[i] - 'A']++;
		else
			arr[str[i] - 'a']++;
	}
	int max = 0;
	int c;
	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			c = i;
			ch = false;
		}
		else if(max == arr[i])
			ch = true;
	}
	if (ch)
		cout << "?" << endl;
	else
		cout << char('A' + c) << endl;

	return 0;
}