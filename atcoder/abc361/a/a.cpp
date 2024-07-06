#include <iostream>
using namespace std;

int main() {
	int n, k, x, num[200];
	cin >> n >> k >> x;
	for (int i = 1;i <= n;i++) {
		cin >> num[i];
	}
	for (int i = 1;i <= k;i++) {
		cout << num[i] << " ";
	}
	cout << x << " ";
	for (int i = k + 1;i <= n;i++) {
		cout << num[i] << " ";
	}
	return 0;
}