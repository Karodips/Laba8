#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ax, ay;
	cin >> ax >> ay;
	if (ax != 0 && ay != 0) {
		if (ax > 0 && ay > 0) cout << "Первая четверть\n";
		else if (ax < 0 && ay > 0) cout << "Вторая четверть\n";
		else if (ax < 0 && ay < 0) cout << "Третья четверть\n";
		else cout << "Четвёртая четверть\n";
	}
	else cout << "Неа\n";
	system("pause");
	return 0;
}
