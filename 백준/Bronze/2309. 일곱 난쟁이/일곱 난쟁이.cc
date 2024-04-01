#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int sum = 0;
	int c;
	for (int i = 0; i < 9; i++) {
		cin >> c;
		v.push_back(c);
		sum += c;
	}
	sort(v.begin(), v.end());
	int imp = 0;
	int idx1=0, idx2=0;
	for (int i = 0; i < 8; i++) {
		imp += v[i];
		for (int j = i + 1; j < 9; j++) {
			imp += v[j];
			if (sum - imp == 100) {
				idx1 = i;
				idx2 = j;
			}
			imp -= v[j];
		}
		imp -= v[i];
	}
	for (int i = 0; i < 9; i++) {
		if (idx1 == i || idx2 == i) {
			continue;
		}
		cout << v[i] << "\n";
	}

}