#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int tmp, next;
    bool flag = true;
    cin >> tmp;
    while (tmp != 0) {
        cin >> next;
        if (next != 0 && tmp > next) {
            flag = false;
        }
        tmp = next;
    }
    if (flag) {
        cout << "������������������ ����������� �� �����������" << endl;
    }
    else {
        cout << "������������������ �� ����������� �� �����������" << endl;
    }
    return 0;
}