#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> v(N);
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	vector<int> copy(v);
	sort(copy.begin(), copy.end());
	copy.erase(unique(copy.begin(), copy.end()),copy.end());
	for(int i = 0; i < N; i++){
		auto it = lower_bound(copy.begin(),copy.end(),v[i]);
		cout << it - copy.begin() << " ";
	}
}