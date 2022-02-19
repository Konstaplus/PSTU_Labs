#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, D, x1, x2;
	cout << "Впишите коэффициенты в уравнение виде a*x^2 + b*x + c = 0" << endl;
	cout << "Впишите коэффициент a: ";
	cin >> a;
	cout << "Впишите коэффициент b: ";
	cin >> b;
	cout << "Впишите коэффициент c: ";
	cin >> c;
	D = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);
	if (D == 0)
	{
		cout << "Только один корень: " << x1;
	}
	if (D > 0)
	{
		cout << "Два корня: " << x1 << ", " << x2;
	}
	if (D < 0)
	{
		cout << "Корней нет";
	}
	return 0;
}