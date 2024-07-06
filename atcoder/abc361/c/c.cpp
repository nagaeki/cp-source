#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, a[200010];
	cin >> n >> k;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	int min_ans = a[n] - a[1];
	for (int i = 0;i <= k;i++) {
		int temp_ans = a[n - i] - a[k - i + 1];
		if (temp_ans < min_ans) min_ans = temp_ans;
	}
	cout << min_ans << endl;
	return 0;
}