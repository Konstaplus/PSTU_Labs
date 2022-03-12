
#include <iostream>
#include <iomanip>
using namespace std;
void show(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << arr[i];
    }
    cout << endl << endl;
}

void add_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

int main()
{
    int size = 10;
    cout << setiosflags(ios::left);
    setlocale(LC_ALL, "rus");
    int *arr=new int[size];
    add_arr(arr, size);
    show(arr, size);
    //--------------------Нахождение максимального и минимального элементов массива--------------
    int  maxI, minI=0;
    maxI = minI;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxI]) maxI = i;
        
        if (arr[i] < arr[minI]) minI = i;                   
    }
    //--------------------Подмена максимального и минимального значения элементов массива--------------
    int tmp = arr[maxI];
    arr[maxI] = arr[minI];
    arr[minI] = tmp;
    cout << "Массив с подменной максимального и минимального значения элементов массива"<< endl << endl;
    show(arr, size);


    //--------------------Нахождение среднего значения--------------
    maxI = 0;
    int sredvalue;

    for (int i = 0; i < size; i++)
    {
        maxI += arr[i];
    }
    sredvalue = (maxI/size);
    cout <<"Среднее значение массива = "<< sredvalue << endl << endl;


    //--------------------Удаляем значения которые больше среднего значения массива более чем на 10% --------------
    int j = 0; // новое положение в массиве
    for (int i = 0; i < size; i++) {
        if ((arr[i]-sredvalue) > (sredvalue/10)) {}
        else { 
            arr[j++] = arr[i]; 
        }
    }
    size = j;
    show(arr, size);
    delete[] arr;
 }
