
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ax, ay, bx, by, cx, cy, AB, AC;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	AB = sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by));
	AC = sqrt((ax - cx)*(ax - cx) + (ay - cy)*(ay - cy));
	if (AB > AC) cout << "Точка С ближе\n";
	else if (AB < AC) cout << "Точка B ближе\n";
	else cout << "Одинаковое расстояние\n";
	system("pause");
	return 0;
}
