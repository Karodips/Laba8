#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c) {
		if (b > c) a = a + b;
		else a = a + c;
	}
	else if (b >= a && b >= c) {
		if (a > c) a = a + b;
		else a = b + c;
	}
	if (c >= b && c >= a) {
		if (a > b) a = a + c;
		else a = c + b;
	}
	cout << a << endl;
	system("pause");
	return 0;
}
