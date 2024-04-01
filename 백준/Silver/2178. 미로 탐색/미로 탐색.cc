#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int N, M;
int maze[200][200];
int visited[200][200] = {0, };
queue< pair<int, int> > q;

void bfs(){
	int nowX, nowY;
	while(!q.empty()){
		nowY = q.front().first;
		nowX = q.front().second;
		q.pop();
		if(N-1 == nowY && M-1 == nowX){
			return;
		}
		
		if(nowY-1 >= 0){
			if(maze[nowY-1][nowX] == 1 && visited[nowY-1][nowX] == 0){
				q.push(make_pair(nowY-1,nowX));
				visited[nowY-1][nowX] = visited[nowY][nowX]+1;
			}
		}
		if(nowY+1 < N){
			if(maze[nowY+1][nowX] == 1 && visited[nowY+1][nowX] == 0){
				q.push(make_pair(nowY+1,nowX));
				visited[nowY+1][nowX] = visited[nowY][nowX]+1;
			}
		}
		if(nowX-1 >= 0){
			if(maze[nowY][nowX-1] == 1 && visited[nowY][nowX-1] == 0){
				q.push(make_pair(nowY,nowX-1));
				visited[nowY][nowX-1] = visited[nowY][nowX]+1;
			}
		}
		if(nowX+1 < M){
			if(maze[nowY][nowX+1] == 1 && visited[nowY][nowX+1] == 0){
				q.push(make_pair(nowY,nowX+1));
				visited[nowY][nowX+1] = visited[nowY][nowX]+1;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string tmp;
	cin >> N;
	cin >> M;

	for(int i = 0; i < N; i++){
		cin >> tmp;
		for(int j = 0; j < M; j++){
			maze[i][j] = (int)tmp[j] - '0';
		}
	}

	q.push(make_pair(0,0));
	visited[0][0] = 1;
	bfs();
	cout << visited[N-1][M-1] << '\n';
	return 0;
}