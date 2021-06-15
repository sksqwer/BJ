#include <iostream>

using namespace std;

long long Fibonacci(int , int , int);
int main()
{
	int n;
	cin >> n;

	cout << Fibonacci(0, 1, n) << endl;


	return 0;

}

long long Fibonacci(int n, int m, int s)
{
	if (s == 2)
		return n + m;
	else if (s == 0)
		return 0;
	else if (s == 1)
		return 1;

	return Fibonacci(m, n + m, s - 1);
}