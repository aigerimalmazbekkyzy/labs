#include <iostream>
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, s, p, r, ch;
	cout << "������� ��� ��������� �����: ";
	cin >> a >> b;
	s = a * a + b * b;
	p = a * a * b * b;
	r = abs(a * a - b * b);
	ch = (a * a) / (b * b);
	cout << "C���� �����  " << s << '\n'
		<< "������������ ����� " << p << '\n'
		<< "�������� ����� " << r << '\n'
		<< "������� ����� " << ch << '\n';
	return 0;
