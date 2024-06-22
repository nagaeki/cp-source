#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll sx, sy, tx, ty;
ll sx_eq, tx_eq;

int main() {
	cin >> sx >> sy;
	cin >> tx >> ty;
	if (sy == ty && abs(sx - tx) == 1) {
		if (sx > tx) {
			ll swp;
			swp = sx; sx = tx; tx = swp;
		}
		if (sy % 2 == 0) {
			if (sx % 2 == 0) {
				cout << 0;
				return 0;
			}
		}
		else {
			if (sx % 2 == 1) {
				cout << 0;
				return 0;
			}
		}
	}
	if (sx < tx) {
		if (sy % 2 == 0) {
			if (sx % 2 == 0) {
				sx_eq = sx + 1;
			}
			else sx_eq = sx;
		}
		else if (sy % 2 == 1) {
			if (sx % 2 == 1) {
				sx_eq = sx + 1;
			}
			else sx_eq = sx;
		}
		if (ty % 2 == 0) {
			if (tx % 2 == 1) {
				tx_eq = tx - 1;
			}
			else tx_eq = tx;
		}
		else if (ty % 2 == 1) {
			if (tx % 2 == 0) {
				tx_eq = tx - 1;
			}
			else tx_eq = tx;
		}
	}
	else if (sx > tx) {
		if (sy % 2 == 0) {
			if (sx % 2 == 1) {
				sx_eq = sx - 1;
			}
			else sx_eq = sx;
		}
		else if (sy % 2 == 1) {
			if (sx % 2 == 0) {
				sx_eq = sx - 1;
			}
			else sx_eq = sx;
		}
		if (ty % 2 == 0) {
			if (tx % 2 == 0) {
				tx_eq = tx + 1;
			}
			else tx_eq = tx;
		}
		else if (ty % 2 == 1) {
			if (tx % 2 == 1) {
				tx_eq = tx + 1;
			}
			else tx_eq = tx;
		}
	}
	if (abs(ty - sy) > abs(tx_eq - sx_eq)) {
		cout << abs(ty - sy);
		return 0;
	}
	else {
		if (sx_eq < tx_eq) {
			sx_eq += abs(ty - sy);
			cout << abs(ty - sy) + (tx_eq - sx_eq) / 2 + 1;
			return 0;
		}
		else if (sx_eq > tx_eq) {
			sx_eq -= abs(ty - sy);
			cout << abs(ty - sy) + (sx_eq - tx_eq) / 2 + 1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}