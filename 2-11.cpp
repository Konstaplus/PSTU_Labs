#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, t;
    bool answer = false;
    cout << "������� ����� ������������������:" << endl;
    cin >> n;
    i = 1;
    while (i <= n && !answer)
    {
        cout << "������� �����:" << endl;
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
        cout << "������� ����� ������������� �����";
    }
    if (t < 0)
    {
        cout << "������� ����� ������������� �����";
    }
    if (t == 0)
    {
        cout << "������� ����� 0";
    }
    return 0;
}