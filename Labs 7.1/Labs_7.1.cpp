#include <iostream>
using namespace std;
float Add(float a1, float a2)
{
	return (a1 / a2);
};
float Add(float p1, float q1, float p2, float q2)
{
	return ((p1 / q1) + (p2 / q2));
}

int main()
{
	float a1, a2, res1, res2;
	float p1, p2, q1, q2;
	cout << "Type decimals fractions for addition ^_^: ";
	cin >> a1 >> a2;
	cout << "Type usual fractions for addition: ";
	cin >> p1;
	cout << "/";
	cin >> q1;
	cin >> p2;
	cout << "/";
	cin >> q2;
	cout << Add(a1, a2) << " = " << a1 << " / " << a2 << endl;
	cout << Add(p1, q1, p2, q2) << " = " << p1 << "/" << q1 << " + " << p2 << "/" << q2 << endl;
}