#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int n,m;
int land[1001][1001];
int distMap[1001][1001] ={0};
int targetx, targety;
queue< pair<int, int> > q;

void bfs(){ 
	int x, y;
	while(!q.empty()){
		y = q.front().first;
		x = q.front().second;
		q.pop();

		if(y-1 >= 0){
			if(land[y-1][x] != 0 && distMap[y-1][x] == 0){
				distMap[y-1][x] = distMap[y][x] + 1;
				q.push(make_pair(y-1,x));
			}
		}
		if(y+1 < n){
			if(land[y+1][x] != 0 && distMap[y+1][x] == 0){
				distMap[y+1][x] = distMap[y][x] + 1;
				q.push(make_pair(y+1,x));
			}
		}
		if(x+1 < m){
			if(land[y][x+1] != 0 && distMap[y][x+1] == 0){
				distMap[y][x+1] = distMap[y][x] + 1;
				q.push(make_pair(y,x+1));
			}
		}
		if(x-1 >= 0){
			if(land[y][x-1] != 0 && distMap[y][x-1] == 0){
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
	
	cin >> n >> m;
	int tmp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> tmp;
			if(tmp == 2){
				targety = i;
				targetx = j;
			}
			land[i][j] = tmp;
		}
	}

	distMap[targety][targetx] = 1;
	q.push(make_pair(targety,targetx));
	bfs();

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(land[i][j] == 0){
				cout << 0 << " ";
			}
			else{
				cout << distMap[i][j]-1 << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}