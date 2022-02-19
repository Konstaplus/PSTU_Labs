#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, t;
    bool answer = false;
    cout << "Введите длину последовательности:" << endl;
    cin >> n;
    i = 1;
    while (i <= n && !answer)
    {
        cout << "Введите число:" << endl;
        cin >> t;
        if (t == 0)
        {
            i++;
        }
        else
        {
            answer = true;
        }
    }
    if (t > 0)
    {
        cout << "Сначала ввели положительное число";
    }
    if (t < 0)
    {
        cout << "Сначала ввели отрицательное число";
    }
    if (t == 0)
    {
        cout << "Сначала ввели 0";
    }
    return 0;
}