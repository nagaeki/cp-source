#include <iostream>
#include <string>
using namespace std;

int main() {
	string S, T;
	cin >> S;
	cin >> T;
	int t_index = 0;
	for (int i = 0;i <= S.length() - 1;i++) {
		for (int j = t_index;T[j] != S[i];j++, t_index++);
		cout << t_index + 1 << " ";
		t_index++;
	}
	return 0;
}