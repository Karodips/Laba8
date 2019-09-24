#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0,"");
	int a, b;
	cin >> a >> b;
	if (a > b) {
		b = a;
		cout << a << " " << b << endl;
	}
	else if (b > a) {
		a = b;
		cout << a << " " << b << endl;
	}
	else {
		a = 0;
		b = 0;
		cout << a << " " << b << endl;
	}
	system("pause");
	return 0;
}
