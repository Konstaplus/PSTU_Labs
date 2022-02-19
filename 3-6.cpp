#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int max, min;
	int a[10];
	max = -9999;
	min = 100000;
	for (int i = 0; i < 10; i++) {
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		else if (a[i] < min) {
			min = a[i];
		}
	}
	cout << "Максимальный элемент массива: " << max << endl;
	cout << "Минимальный элемент массива: " << min << endl;
	return 0;
}