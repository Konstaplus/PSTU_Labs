#include <iostream>
#include <iomanip>
using namespace std;
const int a = 5, b = 5;

void editarr(int arr[a][b], int max)
{
    int arr2[a * b]; // создал одномерный массив так как чтобы переписать двухмерный массив потребуется куча условий if/else 
    // с одномерного массива можно переписать на двухмерный массив данные легче чем писать условия для двухмерного
    // а если будет N- мерный массив то будет куда сложней
    int j = 0;
    for (int i = 0; i < a; i++) {
        for (int ii = 0; ii < b; ii++) {
            if ((j + max) >= (a * b)) arr2[(j + max) - a * b] = arr[i][ii];
            else arr2[j + max] = arr[i][ii];
            j++;
        }
    }
    for (int i = 0; i < a * b; i++) {
        if ((i + 1) % a != 0) cout << setw(5) << arr2[i];
        else cout << setw(5) << arr2[i] << '\n';
    }
}
void main()
{
    cout << setiosflags(ios::left);
    setlocale(LC_ALL, "rus");
    
    int arr[a][b];
    for (int i = 0; i < a; i++) {
        for (int ii = 0; ii < b; ii++){
            arr[i][ii] = rand() % 10;
            cout << setw(5) << arr[i][ii];
        }
        cout << '\n';
    }
    int row,max;
    cout << '\n'<<"Введите номер строки" << '\n';
    cin >> row;
    max = arr[--row][0];
    for (int i = 0; i < b; i++) 
        if (max < arr[row][i]) max = arr[row][i];
        
    cout << '\n' << max << '\n' << '\n';
    editarr(arr, max);
}