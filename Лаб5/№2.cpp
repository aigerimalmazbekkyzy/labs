#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	cout << "������� �������� ����� A, B, C ����� ������: ";
	cin >> A >> B >> C;
	cout << "����� ������� AC �����: " << abs(A - C) << "\n����� ������� BC �����: " << abs(B - C)
		<< "\n����� ���� �������� �����: " << abs(A - C) + abs(B - C);
	return 0;
}
