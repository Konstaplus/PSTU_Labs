#include <iostream>
#include <iomanip>
//#define SIZE 20
using namespace std;
const int SIZE = 20;

//-------------------------Быстрая сортировка-------------------------------------
void qsort(int* arr, int left, int right) 
{
    int i = left, j = right;
    int temp, pivot = arr[(left + right) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
            }

            i++; j--;
        }

    };

    if (left < j) qsort(arr, left, j);
    if (i < right) qsort(arr, i, right);
}
//-------------------------Вывод массива------------------------------------------
void show(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}
//-------------------------Инициализация массива----------------------------------
void add_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}
//-------------------------Сортировка Шелла---------------------------------------
void shell(int arr[], int n)
{
    int d = n / 2;                        //Длина промежутков между элементами
    while (d > 0)
    {
        for (int i = 0; i < n - d; i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + d])
            {
                int temp = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = temp;

                j--;
            }
        }
        d /= 2;
    }
}
//-------------------------------------------------------------------

int main()
{
    int Arr[SIZE], Arr2[SIZE];

    cout << setiosflags(ios::left)<<"QSORT"<< endl;
    add_arr(Arr, SIZE);                 // Заполнение массива случайными числами
    add_arr(Arr2, SIZE);                // Заполнение массива случайными числами

    show(Arr, SIZE);            // Вывод элементов массива до сортировки
    qsort(Arr, 0, SIZE - 1);    // вызов функции сортировки
    show(Arr, SIZE);            // Вывод элементов массива после сортировки

    cout << endl << endl << "SHELL" << endl;
    show(Arr2, SIZE);   // Вывод элементов массива до сортировки
    shell(Arr2, SIZE);  // вызов функции сортировки
    show(Arr2, SIZE);   // Вывод элементов массива после сортировки
    return 0;
}