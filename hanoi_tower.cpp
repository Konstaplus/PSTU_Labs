#include <iostream>

using namespace std;

void hanoi_towers(int quantity, int from, int to, int buf_col) // 1: ���-�� ������. 2: �� ������ �������� 3: ���� 4 : �������� �������

if (quantity != 0)
{
	hanoi_towers(quantity - 1, from, buf_col, to);
	i
		cout << from << " -> " << to << endl;

	hanoi_towers(quantity - 1, buf_col, to, from);
}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int start_col, destination_col, buffer_col, plate_quantity;
	cout << "����� ������� ��������:" << endl;
	cin >> start_col;
	cout << "����� ��������� ��������:" << endl;
	cin >> destination_col;
	cout << "����� �������������� ��������:" << endl;
	cin >> buffer_col;
	cout << "���������� ������:" << endl;
	cin >> plate_quantity;

	hanoi_towers(plate_quantity, start_col, destination_col, buffer_col);
	return 0;
}