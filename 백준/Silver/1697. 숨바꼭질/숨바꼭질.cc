#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int N, K;
bool visited[100001] = {false,};
void find(int now){
	queue< pair<int,int> > q;
	q.push(make_pair(now, 0));
	visited[now] = true;
	int Current, num;
	while(!q.empty()){
		Current = q.front().first;
		num = q.front().second;
		q.pop();
	 	// cout << Current << " " << num << " " << visited[Current] << '\n';
		if(Current == K){
			cout << num << '\n';
			break;
		}
		if(Current+1 >= 0 && Current+1 < 100001){
			if(!visited[Current+1]){
				q.push(make_pair(Current+1, num+1));
				visited[Current+1] = true;
			}
		}
		if(Current-1 >= 0 && Current-1 < 100001){
			if(!visited[Current-1]){
				q.push(make_pair(Current-1, num+1));
				visited[Current-1] = true;
			}
		}
		if(Current*2 >= 0 && Current*2 < 100001){
			if(!visited[Current*2]){
				q.push(make_pair(Current*2, num+1));
				visited[Current*2] = true;
			}	
		}
	}
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	cin >> N >> K;
	find(N);
	return 0;
}