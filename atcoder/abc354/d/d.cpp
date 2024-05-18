#include <iostream>
using namespace std;
using ll = long long;

ll A, B, C, D, height, width, area, areaa, areab, areac, aread;
ll areas[5][5];

ll return_mod(ll a, ll b) {
	if (a >= 0) {
		return a % b;
	}
	ll ans = b - ((-a) % b);
	if (ans == b) {
		return 0;
	}
	return ans;
}

ll area_top_right(ll x, ll y) {
	ll x0 = return_mod(x, 4);
	ll y0 = return_mod(y, 2);
	if (y0 == 0) {
		switch (x0) {
		case 0: return 1 * 2; break;
		case 1: return 0.5 * 2; break;
		case 2: return 0; break;
		case 3: return 0.5 * 2; break;
		}
	}
	else {
		switch (x0)
		{
		case 0: return 0.5 * 2; break;
		case 1: return 1 * 2; break;
		case 2: return 0.5 * 2; break;
		case 3: return 0; break;
		}
	}
	return 0;
}

int main() {
	cin >> A >> B >> C >> D;
	height = D - B;
	width = C - A;
	if (height <= 2 && width <= 4) {
		for (int i = A;i < C;i++) {
			for (int j = B;j < D;j++) {
				area += area_top_right(i, j);
			}
		}
		cout << area << endl;
		return 0;
	}
	for (ll i = 0;i <= 3;i++) {
		for (ll j = 0;j <= 1;j++) {
			ll temp_area = area_top_right(A + i, B + j);
			areas[i + 1][j + 1] = temp_area;
			areas[i + 1][0] += temp_area;
			areas[0][j + 1] += temp_area;
			areas[0][0] += temp_area;
		}
	}
	// for (int i = 0;i <= 4;i++) {
	// 	for (int j = 0;j <= 4;j++) {
	// 		cout << areas[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	areaa += areas[1][0] * ((D - B) / 2);
	switch (return_mod((D - B), 2)) {
	case 0: break;
	case 1: areaa += areas[1][1]; break;
	}
	areab += areas[2][0] * ((D - B) / 2);
	switch (return_mod((D - B), 2)) {
	case 0: break;
	case 1: areab += areas[2][1]; break;
	}
	areac += areas[3][0] * ((D - B) / 2);
	switch (return_mod((D - B), 2)) {
	case 0: break;
	case 1: areac += areas[3][1]; break;
	}
	aread += areas[4][0] * ((D - B) / 2);
	switch (return_mod((D - B), 2)) {
	case 0: break;
	case 1: aread += areas[4][1]; break;
	}
	area += (areaa + areab + areac + aread) * ((C - A) / 4);
	switch (return_mod((C - A), 4))
	{
	case 0: break;
	case 1: area += areaa; break;
	case 2: area += areaa + areab; break;
	case 3: area += areaa + areab + areac; break;
	}
	cout << area << endl;
	return 0;
}