#include <iostream>
using namespace std;

void arr_add(int* arr, int size ) 
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
}
}

void arr_show(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
}
	cout << endl;
}
/*
void arr_swap(int* arr, int size)
{
	int min = 0, max = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < arr[min])
			min = i;

		if (arr[i] > arr[max])
			max = i;
	}

	int tmp = arr[max];
	arr[max] = arr[min];
	arr[min] = tmp;
}
*/
/*double arr_sreValue(int* arr, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	




	return (sum /= size);
}
*/


int main(){
setlocale(LC_ALL, "rus");
int size; 
int j = 0, k = 0;
cout << "������� ������ �������" << endl;
cin >> size; // ������ ������ �������
int* arr = new int[size]; // ������� ������������ ������
arr_add(arr, size);// "������" ��������� �����
cout << "�������� ������" << endl; 
arr_show(arr, size); // �������� ������
for (int i = 0; i < size; i++)
{
	if (arr[i] < arr[j])
		j = i;

	if (arr[i] > arr[k])
		k = i;
}
int tmp = arr[k];
arr[k] = arr[j];
arr[j] = tmp;
cout << "������ � �������� ���� ������������� �������� � ����������� " << endl;
arr_show(arr, size);
double sum = 0;
for (int i = 0; i < size; i++)
{
	sum += arr[i];
}
sum /= size;

cout << "������� �������� ������� = " << sum << endl;
int* newarray = new int[size - 1];
j = 0;
k = 0;

for (int i = 0; i < size; i++)
{
	if (arr[i] < sum)
	{
		newarray[j] = arr[i];
		j++;
	}
	else
	{
		k++;
	}		
}
delete[] arr;
arr = newarray;
size -= k;
arr_show(arr, size);
cout << "������� ��������� ������� = " << k << endl;
return 0;
}