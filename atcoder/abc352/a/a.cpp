#include <iostream>
using namespace std;

int int_within_range(int a, int b, int c) {
	int x, y;
	if (a < b) x = a, y = b;
	else x = b, y = a;
	return (x <= c && c <= y);
}

int main() {
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	if (int_within_range(x, y, z)) cout << "Yes";
	else cout << "No";
	return 0;
}