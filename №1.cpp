#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, S, P;
	cout << "������� ������� ��������������: ";
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "������� S ����� " << S << '\n' << "�������� P ����� " << P;
	return 0;
}
