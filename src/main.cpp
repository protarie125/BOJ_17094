#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto s = string{};
	cin >> s;

	auto t = int{ 0 };
	auto e = int{ 0 };
	for (const auto& x : s) {
		if ('2' == x) {
			++t;
		}
		else if ('e' == x) {
			++e;
		}
	}

	if (t < e) {
		cout << 'e';
	}
	else if (e < t) {
		cout << '2';
	}
	else {
		cout << "yee";
	}

	return 0;
}