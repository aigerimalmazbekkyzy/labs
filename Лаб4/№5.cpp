#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, s, p, r, ch;
	cout << "������� ��� ��������� �����: ";
	cin >> a >> b;
	s = abs(a) + abs(b);
	p = abs(a) * abs(b);
	r = abs(abs(a) - abs(b));
	ch = abs(a) / abs(b);
	cout << "C���� �����  " << s << '\n' 
		 << "������������ ����� " << p << '\n' 
		 << "�������� ����� " << r << '\n' 
		 << "������� ����� " << ch << '\n';
	return 0;
}