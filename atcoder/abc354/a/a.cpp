#include <iostream>
using namespace std;
using ll = long long;

ll H, height, days;

int main() {
	cin >> H;
	while (height <= H) {
		height += 1 << days;
		days++;
	}
	cout << days << endl;
	return 0;
}