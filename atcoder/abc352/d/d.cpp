#include <iostream>
using namespace std;

int N, K, where_P[300000], min_index[300000], max_index[300000];
int ans;

int main() {
	cin >> N >> K;
	ans = N;
	for (int i = 1;i <= N;i++) {
		int num;
		cin >> num;
		where_P[num] = i;
	}
	max_index[1] = where_P[1];
	min_index[1] = where_P[1];
	for (int i = 1;i <= K;i++) {
		if (where_P[i] > max_index[1]) max_index[1] = where_P[i];
		if (where_P[i] < min_index[1]) min_index[1] = where_P[i];
	}
	for (int i = 2;i <= N - K + 1;i++) {
		if (max_index[i - 1] == where_P[i - 1]) {
			max_index[i] = 1;
			for (int j = i;j <= i + K - 1;j++) {
				if (where_P[j] > max_index[i]) max_index[i] = where_P[j];
			}
		}
		else {
			max_index[i] = max_index[i - 1];
			if (where_P[i + K - 1] > max_index[i]) max_index[i] = where_P[i + K - 1];
		}
		if (min_index[i - 1] == where_P[i - 1]) {
			min_index[i] = N;
			for (int j = i;j <= i + K - 1;j++) {
				if (where_P[j] < min_index[i]) min_index[i] = where_P[j];
			}
		}
		else {
			min_index[i] = min_index[i - 1];
			if (where_P[i + K - 1] < min_index[i]) min_index[i] = where_P[i + K - 1];
		}
	}
	for (int i = 1;i <= N - K + 1;i++) {
		if (max_index[i] - min_index[i] < ans) ans = max_index[i] - min_index[i];
	}
	cout << ans;
	return 0;
}