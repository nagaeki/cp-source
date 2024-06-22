#include <iostream>
using namespace std;

int N, pos[100][3], ans;

int main() {
	cin >> N;
	for (int i = 1;i <= 2 * N;i++) {
		int c;
		cin >> c;
		if (!pos[c][1]) pos[c][1] = i;
		else pos[c][2] = i;
	}
	for (int i = 1;i <= N;i++) {
		if (pos[i][1] + 2 == pos[i][2]) ans++;
	}
	cout << ans << endl;
	return 0;
}