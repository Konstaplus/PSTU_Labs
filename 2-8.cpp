#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 2)
	{
		cout << "Write N > 2";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}