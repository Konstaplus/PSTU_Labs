#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, an;
	cin >> a >> b;
	if (b == 0)
	{
		cout << "На ноль делить нельзя";
	}
	else
	{
		an = a / b;
		cout << an;
	}
	return 0;
}