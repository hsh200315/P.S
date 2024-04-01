#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
	int N, X;
	cin >> N >> X;
	int arr[101];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int num = 0;
	while (1) {
		if (num == N) {
			num = 0;
		}
		else if (arr[num] < X) {
			cout << num+1;
			break;
		}
		else {
			num += 1;
			X += 1;	
		}
	}
}