#include <iostream>
#include <string>

using namespace std;

string reverse(string str);
string compare(string str1, string str2);

int main()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;

	str1 = reverse(str1);
	str2 = reverse(str2);
	
	cout << compare(str1, str2) << endl;




	return 0;
}


string reverse(string str)
{
	string temp = str;
	int len = str.length();

	for (int i = 0; i < len; i++)
	{
		temp[i] = str[len - 1 - i];
	}
	return temp;


}


string compare(string str1, string str2)
{
	int len1, len2;
	len1 = str1.length();
	len2 = str2.length();

	if (len1 > len2)
		return str1;
	else if (len1 < len2)
		return str2;
	else
	{
		bool cp = true;
		for (int i = 0; i < len1; i++)
		{
			if (str1[i] < str2[i])
			{
				cp = false;
				break;
			}
			else if (str1[i] > str2[i])
				break;
		}
		if (cp)
			return str1;
		else
			return str2;
	}
}