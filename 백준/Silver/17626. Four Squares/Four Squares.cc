#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int input_num;
	cin >> input_num;
	
	vector<int> v(input_num+1, 0);
	v[1] = 1;
	
	for(int i = 2; i <= input_num; i++){
		int minn = 50000;
		for(int j = 1; j*j <= i; j++){
			int tmp = i - j*j;
			minn = min(minn,v[tmp]);
		}
		v[i] = minn + 1;
	}
	cout << v[input_num];
}