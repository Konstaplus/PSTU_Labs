#include <iostream>

using namespace std;

int main()
{
    int n, pr;
    pr = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pr = pr * i;
    }
    cout << pr;
    return 0;
}