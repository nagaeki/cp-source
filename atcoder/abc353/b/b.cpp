#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int empty_seats = K;
	int count = 0;
	for (int i = 1;i <= N;i++) {
		int group_size;
		cin >> group_size;
		if (group_size > empty_seats) {
			count += 1;
			empty_seats = K - group_size;
		}
		else {
			empty_seats -= group_size;
		}
	}
	count += 1;
	cout << count;
	return 0;
}