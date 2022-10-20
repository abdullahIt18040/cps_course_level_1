
#include <iostream>
#include <vector>
using namespace std;
bool check[2000005];
vector<long long int> prime;
int main()
{
	long long int m = 1000000;
	check[1] = false;
	check[2] = false;
	prime.push_back(2);
	for (long long i = 4; i < m; i += 2)
	{
		check[i] = true;
	}
	for (long long int i = 3; i < m; i += 2)
	{
		if (!check[i])
		{
			prime.push_back(i);
			for (long long int j = i * i; j < m; j += i)
			{
				check[j] = true;
			}
		}
	}
	long long int n, c;
	while (cin >> n >> c)
	{
		vector<int> v;
		for (int i = 1; i <= n; i++)
		{
			if (check[i] == false)
				v.push_back(i);
		}
		int k = v.size();
		if (2 * c >= k)
		{
			cout << n << " " << c << ": ";
			for (int i = 0; i < k - 1; i++)
				cout << v[i] << " ";
			cout << v[k - 1] << endl;
		}
		else if (k % 2 != 0)
		{
			int g = (k - (2 * c - 1)) / 2;
			cout << n << " " << c << ": ";
			for (int i = g; i < k - g; i++)
			{
				if (i != k - g-1)
				{
					cout << v[i] << " ";
				}
				else
				{
					cout << v[i] << endl;
				}
			}
		}
		else
		{
			int g = (k - (2 * c)) / 2;
			cout << n << " " << c << ": ";
			for (int i = g; i < k - g; i++)
			{
				if (i != k - g-1)
					cout << v[i] << " ";
				else
					cout << v[i] << endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
