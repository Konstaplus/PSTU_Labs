#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a[5];
	int max = -999;
	for (int i = 0; i < 5; i++) {
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "Максимальный элемент массива: " << max << endl;
	return 0;
}