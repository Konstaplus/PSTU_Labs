#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, num;
	num = 0;
	cout << "������� �����:";
	cin >> n;
	while (n > 0) {
		num *= 10;
		num = num + (n % 10);
		n = n / 10;

	}
	cout << "�������� �����:" << num << endl;
	return 0;
}