#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	string first, second;
	cin >> a;
	if (a == 0) cout << "Нулевое число\n";
	else {
		if (abs(a % 2) == 1) first = " Нечётное";
		else first = " Чётное";
		if (a > 0) second = " положительное ";
		else second = " отрицательное ";
	}
	cout << a << first << second << "число\n";
	
	system("pause");
	return 0;
}
