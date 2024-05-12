#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

vector<int> A;
int N;
long long ans = 0;
long long sub_count = 0;

int main() {
	cin >> N;
	for (int i = 1;i <= N;i++) {
		int Ai;
		cin >> Ai;
		A.push_back(Ai);
	}
	for (int i = 0;i <= N - 1;i++) {
		ans += ll(A.at(i)) * (N - 1);
	}
	sort(A.rbegin(), A.rend());
	int j = N - 1;
	for (int i = 0;i <= N - 2;i++) {
		j = max(j, i + 1);
		while (j > i && A.at(i) + A.at(j) < 100000000) j--;
		sub_count += j - i;
	}
	ans = ans - ll(sub_count * 100000000);
	cout << ans;
	return 0;
}