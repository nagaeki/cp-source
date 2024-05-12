#include <iostream>
using namespace std;

int main() {
	int N;
	long long A, B, s_height, h_height;
	long long s_height_lower = 0;
	cin >> N;
	cin >> s_height >> h_height;
	for (int i = 2;i <= N;i++) {
		cin >> A >> B;
		long long new_height_insert_upper, new_height_insert_lower;
		new_height_insert_upper = s_height + B;
		new_height_insert_lower = s_height_lower + A + (h_height - s_height_lower);
		if (new_height_insert_upper >= new_height_insert_lower) {
			s_height_lower = s_height;
			s_height = s_height_lower + A;
			h_height = s_height_lower + B;
		}
		else {
			h_height = s_height_lower + A + (h_height - s_height_lower);
			s_height = s_height_lower + A + (s_height - s_height_lower);
			s_height_lower += A;
		}
	}
	cout << h_height;
	return 0;
}