#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#17499

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, temp, moving = 0, A,B,index;
	vector<int> v;
	cin >> N >> M;
	for(int i = 0 ; i < N; i++){
		cin >> temp;
		v.push_back(temp);
	}
	for(int i = 0; i < M; i++){
		cin >> temp;
		if(temp == 1){
			cin >> A >> B;
			if(moving+A > N){
				v[moving+A-N-1] += B;
			}
			else{
				v[moving+A-1] += B;
			}
		}
		else if(temp == 2){
			cin >> A;
			if(moving - A < 0){
				moving = moving + N - A;
			}	
			else{
				moving = moving - A;
			}
		}
		else if(temp == 3){
			cin >> A;
			if(moving + A >= N){
				moving = moving - N + A;
			}
			else{
				moving = moving + A;
			}
		}
	}
	for(int i = 0; i < v.size(); i++){
		if(moving+i >= N){
			cout << v[moving-N+i] << " ";
		}
		else{
			cout << v[i + moving] << " ";
		}
	}
	cout << endl;
}