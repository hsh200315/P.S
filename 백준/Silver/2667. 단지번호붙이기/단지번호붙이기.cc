#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int N;
int maze[26][26];
int visited[26][26] = {0, };
int c = 0;

queue< pair<int, int> > q;

void bfs(){
	int nowX, nowY;
	while(!q.empty()){
		nowY = q.front().first;
		nowX = q.front().second;
		q.pop();
		c++;
		
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
		if(nowX+1 < N){
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
	vector<int> v;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> tmp;
		for(int j = 0; j < N; j++){
			maze[i][j] = (int)tmp[j] - '0';
		}
	}

	for(int i = 0 ; i < N; i++){
		for(int j = 0; j < N; j++){
			if(maze[i][j] == 1 && visited[i][j] == 0){
				q.push(make_pair(i,j));
				visited[i][j] = 1;
				bfs();
				v.push_back(c);
				c = 0;
			}
		}
	}

	cout << v.size() << '\n';
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << '\n';
	}
	return 0;
}