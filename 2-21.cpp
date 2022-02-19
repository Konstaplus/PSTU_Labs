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
        cout << "ѕоследовательность упор€дочена по возрастанию" << endl;
    }
    else {
        cout << "ѕоследовательность не упор€дочена по возрастанию" << endl;
    }
    return 0;
}