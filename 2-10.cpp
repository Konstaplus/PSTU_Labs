#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int max = 0;
	int num;
	cout << "������� ����� ������������������:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� �����:" << endl;
		cin >> num;
		if (num > max)
		{
			max = num;
		}
	}
	cout << "Max �������: " << max;
	return 0;
}