#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int n,m;
int land[1001][1001];
int distMap[1001][1001];
queue< pair<int, int> > q;

void bfs(){ 
	int x, y;
	while(!q.empty()){
		y = q.front().first;
		x = q.front().second;
		q.pop();

		if(y-1 >= 0){
			if(land[y-1][x] == 0 && distMap[y-1][x] == 0){
				land[y-1][x] = 1;
				distMap[y-1][x] = distMap[y][x] + 1;
				q.push(make_pair(y-1,x));
			}
		}
		if(y+1 < n){
			if(land[y+1][x] == 0 && distMap[y+1][x] == 0){
				land[y+1][x] = 1;
				distMap[y+1][x] = distMap[y][x] + 1;
				q.push(make_pair(y+1,x));
			}
		}
		if(x+1 < m){
			if(land[y][x+1] == 0 && distMap[y][x+1] == 0){
				land[y][x+1] = 1;
				distMap[y][x+1] = distMap[y][x] + 1;
				q.push(make_pair(y,x+1));
			}
		}
		if(x-1 >= 0){
			if(land[y][x-1] == 0 && distMap[y][x-1] == 0){
				land[y][x-1] = 1;
				distMap[y][x-1] = distMap[y][x] + 1;
				q.push(make_pair(y,x-1));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> m >> n;
	int tmp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> tmp;
			if(tmp == 1){
				q.push(make_pair(i,j));
				distMap[i][j] = 1;
			}
			land[i][j] = tmp;
		}
	}
	bfs();

	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < m; j++){
	// 		if(land[i][j] == 0){
	// 			cout << 0 << " ";
	// 		}
	// 		else{
	// 			cout << distMap[i][j] << " ";
	// 		}
	// 	}
	// 	cout << '\n';
	// }
	int max = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(land[i][j] == 0){
				cout << -1 << '\n';
				return 0;
			}
			if(distMap[i][j] > max){
				max = distMap[i][j];
			}
		}
	}
	cout << max-1 << '\n';
	return 0;
}