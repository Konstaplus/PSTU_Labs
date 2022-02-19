#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    k = sqrt(n);
    for (int i = 1; i <= k; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}