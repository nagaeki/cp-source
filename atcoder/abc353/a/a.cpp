#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int height_first;
	cin >> height_first;
	for (int i = 2;i <= N;i++) {
		int t_height;
		cin >> t_height;
		if (t_height > height_first) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}