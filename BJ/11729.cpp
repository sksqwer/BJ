//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;

/*
const int MAX = 987654321;
int n;
vector<int> a, b, c;
void hanoi(int pre);
void move(vector<int> &v1, vector<int> &v2);

int main()
{
	cout << "원반 최대 크기(0:exit) : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		a.insert(a.end(), i);

	hanoi(2);


	return 0;

}

void hanoi(int pre)
{
	if (n == 0)
		return;

	if (c.size() == n)
		return;

	vector<int> *pl, *pr;
	int ta = MAX, tb = MAX, tc = MAX;

	long long k = 1;

	for (int i = 0; i < n; i++)
		k *= 2;
	k--;
	cout << k << endl;

	for (int i = 0; i < k; i++)
	{
		ta = MAX, tb = MAX, tc = MAX;
		if (pre == 0)
		{
			if (!b.empty())
				tb = b.front();

			if (!c.empty())
				tc = c.front();

			if (tb < tc)
			{
				if (b.size() % 2)
				{
					move(b, c);
					cout << 2 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(b, a);
					cout << 2 << " " << 1 << endl;
					pre = 0;
				}
			}
			else
			{
				if (c.size() % 2)
				{
					move(c, b);
					cout << 3 << " " << 2 << endl;
					pre = 1;
				}
				else
				{
					move(c, a);
					cout << 3 << " " << 1 << endl;
					pre = 0;
				}
			}
		}
		else if (pre == 1)
		{
			if (!a.empty())
				ta = a.front();

			if (!c.empty())
				tc = c.front();

			if (ta < tc)
			{
				if (a.size() % 2)
				{
					move(a, c);
					cout << 1 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(a, b);
					cout << 1 << " " << 2 << endl;
					pre = 1;
				}
			}
			else
			{
				if (c.size() % 2)
				{
					move(c, b);
					cout << 3 << " " << 2 << endl;
					pre = 1;
				}
				else
				{
					move(c, a);
					cout << 3 << " " << 1 << endl;
					pre = 0;
				}
			}
		}
		else
		{
			if (!a.empty())
				ta = a.front();

			if (!b.empty())
				tb = b.front();

			if (ta < tb)
			{
				if (a.size() % 2)
				{
					move(a, c);
					cout << 1 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(a, b);
					cout << 1 << " " << 2 << endl;
					pre = 1;
				}
			}
			else
			{
				if (b.size() % 2)
				{
					move(b, c);
					cout << 2 << " " << 3 << endl;
					pre = 2;
				}
				else
				{
					move(b, a);
					cout << 2 << " " << 1 << endl;
					pre = 0;
				}
			}
		}


	}

	return;

}
void move(vector<int> &v1, vector<int> &v2)
{
	v2.insert(v2.begin(), v1[0]);
	v1.erase(v1.begin());
}*//*
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> a, b, c;
int n;

void hanoi(vector<int> &, vector<int> &, vector<int> &, int);
void move(vector<int> &, vector<int> &);

int main()
{
	cin >> n;
	a.insert(a.end(), 1);
	b.insert(b.end(), 2);
	c.insert(c.end(), 3);

	for (int i = 1; i <= n; i++)
		a.insert(a.end(), i);

	cout << pow(2, n) - 1 << endl;
	hanoi(a, c, b, n);

	return 0;

}

void hanoi(vector<int>& l, vector<int>& r, vector<int>& m, int k)
{
	if (k == 0)
		return;
	hanoi(l, m, r, k - 1);

	move(l, r);
	cout << l.front() << " " << r.front() << endl;
	hanoi(m, r, l, k - 1);

}

void move(vector<int> &v1, vector<int> &v2)
{
	v2.insert(v2.begin() + 1, v1[1]);
	v1.erase(v1.begin() + 1);
}*/


#include <iostream>

using namespace std;

int n;

void hanoi(int& ,int&, int& , int);

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> n;
	int a = 1, b = 2, c = 3;

	cout << (1 << n) - 1 << "\n";
	hanoi(a, c, b, n);

	return 0;

}

void hanoi(int& a, int& b, int& c, int k)
{
	if (k == 0)
		return;
	hanoi(a, c, b, k - 1);

	printf("%d %d\n", a, b);;

	hanoi(c, b, a, k - 1);

}
