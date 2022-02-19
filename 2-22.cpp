#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float n, a, max;
    int i = 2;
    int posFirst = 1;
    int posLast = 1;
    cin >> n;
    max = sin(n + 1 / n);
    while (i <= n) {
        a = sin(n + i / n);
        if (a > max) {
            max = a;
            posFirst = i;
            posLast = i;
        }
        else if (a == max) {
            posLast = i;
        }
        i++;
    }
    cout << "Max: " << max << endl;
    cout << "Первый элемент с этим значением: " << posFirst << endl;
    cout << "Последний эдемент с этим значением: " << posLast << endl;
    return 0;
}