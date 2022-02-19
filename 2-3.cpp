#include <iostream>

using namespace std;

int main()
{
	int n;
	int p;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		p = 1;
		for (int j = 1; j <= 2 * i; j++)
		{
			p *= j;
		}
		sum += p;
	}
	cout << sum << endl;
	return 0;
}