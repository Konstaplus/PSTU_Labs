#include <iostream>

using namespace std;

int main() {
    int n;
    float x, y, p, fact, sum;
    cin >> n >> x;
    sum = 1 + x;
    fact = 1;
    for (int i = 2; i <= n; i++) {
        p = 1;
        for (int j = 1; j <= i; j++) {
            p *= x;
        }
        fact *= i;
        sum += p / fact;
    }
    cout << sum << endl;
    return 0;
}