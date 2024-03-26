#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int N;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int start, end;
	vector < pair<int, int> > v;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> start >> end;
		v.push_back(make_pair(end, start));
	}
	sort(v.begin(), v.end());

	int currentTime = v[0].first;
	int count = 1;
	for(int index = 1; index < v.size(); index++){
		if(currentTime <= v[index].second){
			count += 1;
			currentTime = v[index].first;
		}
	}
	cout << count << '\n';
	return 0;
}