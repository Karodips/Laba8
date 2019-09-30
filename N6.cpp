#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, i, c;
	string first, second;
	cin >> a;
	c = a;
	b = 0;
	if (a > 0 && a < 1000)
	{
		if (a % 2 == 1) first = " Нечётное";
		else first = " Чётное";
		while (c != 0) {
			c = (c - c % 10) / 10;
			b = b + 1;
		}
		if (b == 1) second = " одно";
		else if (b == 2) second = " двух";
		else second = " трёх";
	}
	cout << a << first << second << "значное число\n";
	system("pause");
	return 0;
}
