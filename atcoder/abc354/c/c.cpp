#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct card {
	int id;
	int A;
	int C;
};

int N, v;
vector<card> cards;
vector<int> ans;

int main() {
	cin >> N;
	for (int i = 1;i <= N;i++) {
		int ai, ci;
		cin >> ai >> ci;
		card pushCard = card{ i,ai,ci };
		cards.push_back(pushCard);
	}
	sort(cards.begin(), cards.end(), [](card a, card b) {
		return a.C < b.C;
		});
	for (int i = 0;i < N;i++) {
		if (cards.at(i).A > v) {
			v = cards.at(i).A;
			ans.push_back(cards.at(i).id);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for (int i = 0;i < ans.size();i++) {
		cout << ans.at(i) << " ";
	}
	return 0;
}
