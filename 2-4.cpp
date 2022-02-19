#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int space = n / 2;
	int star = 1;
	for (int i = 1; i <= (n + 1) / 2; i++)
	{
		for (int j = 1; j <= space; j++)
		{
			cout << "  ";
		}
		space--;
		for (int j = 1; j <= star; j++)
		{
			cout << "* ";
		}
		star += 2;
		cout << endl;
	}
	return 0;
}