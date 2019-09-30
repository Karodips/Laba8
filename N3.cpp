#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ax, ay, bx, by, cx, cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	if (sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) > sqrt((ax - cx)*(ax - cx) + (ay - cy)*(ay - cy))) cout << "Точка С ближе\n";
	else if (sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by)) < sqrt((ax - cx)*(ax - cx) + (ay - cy)*(ay - cy))) cout << "Точка B ближе\n";
	else cout << "Одинаковое расстояние\n";
	system("pause");
	return 0;
}
