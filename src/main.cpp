#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x;
	cin >> x;

	double y;
	cin >> y;

	while (999 != y) {
		cout << fixed << setprecision(2) << y - x << '\n';

		x = y;
		cin >> y;
	}

	return 0;
}