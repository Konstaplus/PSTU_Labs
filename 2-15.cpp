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
			cout << "��� ����� ���� � �����";
			break;
		}
		n = n / 10;
	}
	if (!f)
	{
		cout << "����� " << z << " � �����" << n << " ���" << endl;
	}
	return 0;
}