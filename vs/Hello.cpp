#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int x;
	while (true) {
		cin >> x;
		if (-1 == x) {
			break;
		}
		v.push_back(x);
	}
	for (auto m : v) {
		cout << m << " ";
}
}