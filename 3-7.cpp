#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 5;
	bool flag = true;
	int a[5]{ 0, 2, 3, 4, 5 };
	for (int i = 4; i > 0; i--) {
		if (a[i] < a[i - 1]) { flag = false; }
	}
	if (flag) {
		cout << "Массив упорядочен" << endl;
	}
	else {
		cout << "Массив не упорядочен" << endl;
	}
	return 0;
}