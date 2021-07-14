#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int g, c;
		cin >> g >> c;
		// use the formula given (problem statement) and solve for 'h'
		cout << (c * c) / (2 * g) << '\n';
	}
	return 0;
}
