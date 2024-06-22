#include <iostream>
using namespace std;

int N, K, ans;
char S[1010];

int main() {
	for (int i = 1;i <= N;i++) {
		cin >> S[i];
	}
	int first_combi = 1;
	for (int j = 1;j <= K / 2;j++) {
		if (S[j] == S[K - (j - 1)]) {
			if (S[j] != '?') {
				cout << 0;
				return 0;
			}
			first_combi = first_combi * 2 % 998244353;
		}
	}
}

// int main() {
// 	ans = 1;
// 	cin >> N >> K;
// 	for (int i = 1;i <= N;i++) {
// 		cin >> S[i];
// 	}
// 	for (int i = 1;i <= N - K + 1;i++) {
// 		for (int j = i;j <= i + K / 2 - 1;j++) {
// 			if (S[j] == S[i + K - 1 - (j - i)]) {
// 				if (S[j] != '?') {
// 					cout << 0;
// 					return 0;
// 				}
// 				ans = ans * 2 % 998244353;
// 			}
// 		}
// 	}
// 	cout << ans;
// 	return 0;
// }