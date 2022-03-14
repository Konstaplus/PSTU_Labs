#include <iostream>
#include <stdarg.h>
#include <iomanip>
using namespace std;
void min(int n, ...)
{
    int value = 0;
    va_list vl;
    va_start(vl, n);
    cout.setf(ios::left);
    for (int i = 0; i < n; i++)
    {
        value = va_arg(vl, int);
        cout << setw(4) << oct << (value);
    }
    cout << endl << endl;
}
void main()
{ 
    min(3, 2, 12, 23);
    min(5, 12, 34, 45, -3, 2);
    min(8, 6, 23, 12, 23, 12, 2, 45);
}