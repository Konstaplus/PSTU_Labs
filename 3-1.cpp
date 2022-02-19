#include <iostream>

using namespace std;

int main() {
    int n;
    n = 5;
    int tmp;
    int arr[5] = { 36, 84, 3, 68, 7 };
    for (int j = 1; j < n; j++) {
        tmp = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > tmp) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = tmp;
    }
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}