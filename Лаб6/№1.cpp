#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, t;
	cout << "������� �������� ������ ����������: ";
	cin >> A;
	cout << "������� �������� ������ ����������: ";
	cin >> B;
	t = A;
	A = B;
	B = t;
	cout << "������ ���������� �����: " << A << "\n������ ���������� �����: " << B;
}
