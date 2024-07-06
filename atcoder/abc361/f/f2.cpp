#include <iostream>
#include <set>
#include <cmath>
using namespace std;
using ll = long long;

ll n;

int main() {
	cin >> n;
	set<ll> nums;
	nums.clear();
	int ans = 1;
	for (ll i = 2;i <= sqrt(n);i++) {
		if (nums.find(i) == nums.end()) {
			ll j = 2;
			ll k = i * i;
			while (k <= n) {
				nums.insert(k);
				j++;
				ans++;
				k *= i;
			}
		}
	}
	cout << nums.size() << endl;
	return 0;
}