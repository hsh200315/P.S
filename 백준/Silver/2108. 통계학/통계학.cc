#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int times;
	scanf("%d",&times);

	int a;
	int sum = 0;
	int arr[8001] = {0,};
	int min = 4001, max = -4001;
	vector<int> v;

	if (times == 1) {
		scanf("%d", &a);
		cout << a << "\n";
		cout << a << "\n";
		cout << a << "\n";
		cout << "0" << "\n";
		return 0;
	}

	for (int i = 0; i < times; i++) {
		scanf("%d", &a);
		sum += a;
		arr[a+4000]++;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	double Avg;

	Avg = (double)sum / times;
	Avg = round(Avg);
	if (Avg == -0) {
		cout << "0\n";
	}
	else {
		cout << Avg << "\n";
	}

	cout << v[(times - 1) / 2] << "\n";

	int qmax = 0;
	int tmp;
	vector<int> fre;
	for (int i = 0; i < 8001; i++) {
		if (qmax < arr[i]) {
			fre.clear();
			qmax = arr[i];
			fre.push_back(i-4000);
		}
		else if (qmax == arr[i]) {
			fre.push_back(i - 4000);
		}
	}
	if (fre.size() == 1) {
		cout << fre[0] << "\n";
	}
	else {
		sort(fre.begin(), fre.end());
		cout << fre[1] << "\n";
	}
	
	cout << v.back() - v.front() << "\n";
}