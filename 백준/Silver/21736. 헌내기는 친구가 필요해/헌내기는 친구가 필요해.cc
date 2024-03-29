#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int n,m;
int land[1001][1001];
int distMap[1001][1001];
int numPeople = 0;
int targetx,targety;
queue< pair<int, int> > q;

void bfs(){ 
	int x, y;
	while(!q.empty()){
		y = q.front().first;
		x = q.front().second;
		q.pop();

		if(y-1 >= 0){
			if(land[y-1][x] != -1 && distMap[y-1][x] == 0){
				if(land[y-1][x] == 1){
					numPeople += 1;
				}
				distMap[y-1][x] = 1;
				q.push(make_pair(y-1,x));
			}
		}
		if(y+1 < n){
			if(land[y+1][x] != -1 && distMap[y+1][x] == 0){
				if(land[y+1][x] == 1){
					numPeople += 1;
				}
				distMap[y+1][x] = 1;
				q.push(make_pair(y+1,x));
			}
		}
		if(x+1 < m){
			if(land[y][x+1] != -1 && distMap[y][x+1] == 0){
				if(land[y][x+1] == 1){
					numPeople += 1;
				}
				distMap[y][x+1] = 1;
				q.push(make_pair(y,x+1));
			}
		}
		if(x-1 >= 0){
			if(land[y][x-1] != -1 && distMap[y][x-1] == 0){
				if(land[y][x-1] == 1){
					numPeople += 1;
				}
				distMap[y][x-1] = 1;
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
	char tmp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> tmp;
			if(tmp == 'O'){
				land[i][j] = 0;
			}
			else if(tmp == 'P'){
				land[i][j] = 1;
			}
			else if(tmp == 'X'){
				land[i][j] = -1;
			}
			else if(tmp == 'I'){
				land[i][j] = 0;
				targety = i;
				targetx = j;
			}
		}
	}

	distMap[targety][targetx] = 1;
	q.push(make_pair(targety, targetx));
	bfs();
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < m; j++){
	// 		cout << land[i][j];
	// 	}
	// 	cout << '\n';
	// }
	// cout << targety << targetx << '\n';
	if(numPeople == 0){
		cout << "TT\n";
	}
	else{
		cout << numPeople << '\n';
	}
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < ; j++){
	// 		cout << distMap[i][j];
	// 	}
	// 	cout << '\n';
	// }
	return 0;
}