#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> v[101];
queue<int> q;
int visited[101][101];

void bfs(int start){
    int w[101]={0,};
    q.push(start);
    w[start]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0; i< v[x].size(); i++){
            int index = v[x][i];
            if(w[index]==0){
                w[index]=1;
                q.push(index);
                visited[index][start] = visited[x][start]+1;
                visited[start][index] = visited[start][x]+1;
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
  int n,m; cin >> n >> m;
    int x,y;
    int sum=0, result=0, min=2000000000;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            visited[i][j]=0;
        }
    }
    
    for(int i=1; i<=n; i++)
        bfs(i);
        
    for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<=n; j++){
            sum+=visited[i][j];
        }
        if(min > sum){ 
            min = sum;
            result = i;
        }
    }
    
    cout << result << "\n";

}