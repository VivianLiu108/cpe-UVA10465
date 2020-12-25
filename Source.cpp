#include<iostream>
using namespace std;

int main()
{
	int m, n, t;
	while (cin >> m >> n >> t)
	{
		if (m > n)
		{
			if (t%n == 0)
				cout << t / n << endl;
			else 
			{
				int i = 0;
				while ((t%n + n * i) % m)
				{
					i++;
				}
				cout << t / n - i + (t%n + n * i) / m << endl;
			}
		}
		else
		{
			if (t%m == 0)
				cout << t / m << endl;
			else
			{
				int i = 0;
				while ((t%m + m * i) % n)
				{
					i++;
				}
				cout << t / m - i + (t%m + m * i) / n << endl;
			}
		}
	}
}