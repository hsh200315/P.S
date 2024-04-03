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

	cin >> N;
	cin >> M;

	cin >> S;
	
	int checkNum = 2*N+1;
	string compare = "";
	for(int i = 0; i < checkNum; i++){
		if(i%2 == 0){
			compare += 'I';
		}
		else{
			compare += 'O';
		}
	}

	for(int i = 0; i < M; i++){
		if(S.substr(i,checkNum) == compare ){
			total += 1;
		}
	}
	cout << total << '\n';
	return 0;
}