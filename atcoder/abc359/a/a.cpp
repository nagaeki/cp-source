#include <iostream>
#include <string>
using namespace std;

int N, ttl;

int main() {
	cin >> N;
	for (int i = 1;i <= N;i++) {
		string in;
		cin >> in;
		if (in == "Takahashi") ttl++;
	}
	cout << ttl << endl;
	return 0;
}