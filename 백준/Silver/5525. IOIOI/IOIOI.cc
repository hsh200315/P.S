#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	string S;
	int total = 0;

	cin >> N >> M >> S;
	
	for(int i = 1; i < S.length(); i++){
		int count = 0;
		if(S[i-1] == 'I'){
			while(S[i] == 'O' && S[i+1] == 'I'){
				i+=2;
				count++;
				if(count == N){
					count--;
					total += 1;
				}
			}
		}
	}
	cout << total << '\n';
	return 0;
}