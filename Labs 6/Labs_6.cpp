#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
    cout << setiosflags(ios::left);
    setlocale(LC_ALL, "rus");
    string a = "Париж Москва Токио";
    cout  << a << '\n';
    int p, start = 0, value;
    value = a.size();
    for (int i = 0; i < value; i++)
    {
        if (a[i] == ' ')
        {
            p = i;
            p = p - 1;
            for (int ii = start; ii < p - ((p - start) / 2) + 1; ii++)
            {
                swap(a[ii], a[p]);
                p--;
            }
            start = i+1; 
        }
    }
    p = value-1;
    for (int ii = start; ii < p - ((p - start) / 2) + 1; ii++)
    {
        swap(a[ii], a[p]);
        p--;
    }    
    cout <<'\n' << a;    
}