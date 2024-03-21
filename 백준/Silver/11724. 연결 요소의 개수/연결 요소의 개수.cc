#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<short> line[1001];
bool isVisit[1001];
int num = 0;

void dfs(int x){
	isVisit[x] = true;
	for(int i = 0; i < line[x].size(); i++){
		int y = line[x][i];
		if(!isVisit[y]){
			dfs(y);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int A, B;
	cin >> N >> M;
	
	for(int i = 0; i < N+1; i++){
		isVisit[i] = false;
	}
	for(int i = 0; i < M; i++){
		cin >> A >> B;
		line[A].push_back(B);
		line[B].push_back(A);
	}
	for(int i = 1; i < N+1; i++){
		if(!isVisit[i]){
			dfs(i);
			num++;
		}
	}
	cout << num << endl;
}