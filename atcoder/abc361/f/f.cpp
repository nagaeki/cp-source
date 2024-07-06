#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;

bool not_prime[1000000010];

int main() {
	ll n;
	cin >> n;
	ll sqrt_n = sqrt(n) + 1;
	not_prime[1] = 1;
	for (int i = 2;i <= 1000000000;i++) {
		if (!not_prime[i]) {
			int k = i;
			while (k < 1000000000) {
				k += i;
				not_prime[k] = 1;
			}
		}
	}
	return 0;
	int ans = 0;
	for (int i = 2;i <= sqrt_n;i++) {
		if (!not_prime[i]) {
			ll k = i * i;
			while (k < n) {
				ans++;
				k *= i;
			}
		}
	}
	cout << ans << endl;
	return 0;
}