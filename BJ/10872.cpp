#include <iostream>

using namespace std;

long long factorial(int n, int sum);
int main()
{
	int n;
	cin >> n;

	cout << factorial(n, 1) << endl;


	return 0;

}

long long factorial(int n, int sum)
{
	if (n == 0)
		return sum;
	sum *= n;
	return factorial(n - 1, sum);
}