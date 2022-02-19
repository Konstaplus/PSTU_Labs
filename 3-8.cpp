#include <iostream>

using namespace std;

int main() {
    int n, tmp;
    n = 5;
    int arr[5] = { 54, 23, 87, 21, 2 };
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}