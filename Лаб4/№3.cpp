#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, average;
	cout << "������� ��� �����: ";
	cin >> a >> b;
	average = (a + b) / 2;
	cout << "������� �������������� ����� " << average << '\n';
	return 0;
}
