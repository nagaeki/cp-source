#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, h, i, j, k, l;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
	int x_min = max(a, g);
	int x_max = min(d, j);
	int y_min = max(b, h);
	int y_max = min(e, k);
	int z_min = max(c, i);
	int z_max = min(f, l);
	if (x_min < x_max && y_min < y_max && z_min < z_max) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	return 0;
}