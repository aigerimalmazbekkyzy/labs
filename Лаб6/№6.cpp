#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, oleg, oleg2;
	cout << "������� ����� A: ";
	cin >> A;
	oleg = A * A;
	A = oleg * oleg;
	oleg = A * A;
	cout << "����� � � ������� ������� �����: " << oleg;
}
