#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, z;
	bool f = false;
	cin >> n >> z;
	while (n > 0)
	{
		if (z == (n % 10))
		{
			f = true;
			cout << "Эта цифра есть в числе";
			break;
		}
		n = n / 10;
	}
	if (!f)
	{
		cout << "Цифры " << z << " в числе" << n << " нет" << endl;
	}
	return 0;
}