#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float n, a, max;
    int i = 2;
    int count = 1;
    cin >> n;
    max = sin(n + 1 / n);
    while (i <= n) {
        a = sin(n + i / n);
        if (a > max) {
            max = a;
            count = 1;
        }
        else if (a == max) {
            count += 1;
        }
        i++;
    }
    cout << "Max: " << max << endl;
    cout << "Количество элементов с этим значением: " << count << endl;
    return 0;
}