#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, D, x1, x2;
	cout << "������� ������������ � ��������� ���� a*x^2 + b*x + c = 0" << endl;
	cout << "������� ����������� a: ";
	cin >> a;
	cout << "������� ����������� b: ";
	cin >> b;
	cout << "������� ����������� c: ";
	cin >> c;
	D = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);
	if (D == 0)
	{
		cout << "������ ���� ������: " << x1;
	}
	if (D > 0)
	{
		cout << "��� �����: " << x1 << ", " << x2;
	}
	if (D < 0)
	{
		cout << "������ ���";
	}
	return 0;
}