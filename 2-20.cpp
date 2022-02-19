include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float n, z, a;
    int i = 1;
    bool flag = false;
    cin >> n >> z;
    while (i <= n && !flag) {
        a = sin(n + i / n);
        if (a == z) {
            flag = true;
        }
        else {
            i++;
        }
    }
    if (flag) {
        cout << "Ёлемент " << z << " найден. ≈го номер: " << i << endl;
    }
    else {
        cout << "Ёлемент не найден" << endl;
    }
    return 0;
}