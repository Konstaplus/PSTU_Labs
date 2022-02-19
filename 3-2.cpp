#include <iostream>

using namespace std;

int main() {
    int n = 7;
    int tmp, min_in;
    int arr[7] = { 5, 2, 4, 0, 6, 1, 3 };
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        min_in = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_in]) {
                min_in = j;
            }
        }
        tmp = arr[min_in];
        arr[min_in] = arr[i];
        arr[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}