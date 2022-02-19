#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int space = 1;
	int star = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= space; j++)
		{
			cout << "  ";
		}
		space++;
		for (int j = 1; j <= star; j++)
		{
			cout << "* ";
		}
		star--;
		cout << endl;
	}
	return 0;
}