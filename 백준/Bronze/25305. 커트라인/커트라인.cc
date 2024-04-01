#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	int people, prize;
	cin >> people >> prize;
	vector<int> v;
	int a;
	for (int i = 0; i < people; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout << v.at(people-prize);
}