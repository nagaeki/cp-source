#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, total_rate;
vector<string> player_names;

int main() {
	cin >> N;
	for (int i = 1;i <= N;i++) {
		string input_name;
		int ci;
		cin >> input_name >> ci;
		player_names.push_back(input_name);
		total_rate += ci;
	}
	sort(player_names.begin(), player_names.end());
	cout << player_names.at(total_rate % N) << endl;
	return 0;
}