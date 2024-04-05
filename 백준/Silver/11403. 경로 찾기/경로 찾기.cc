#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <utility>
#include <vector>

using namespace std;

vector<int> v[100];
int visited[100] = {0, };

void dfs(int row){
    for(int i = 0; i < v[row].size(); i++){
        if(!visited[v[row][i]]){
            visited[v[row][i]] = 1;
            dfs(v[row][i]);
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> tmp;
            if(tmp){
                v[i].push_back(j);
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        memset(visited, 0, sizeof(visited));
        dfs(i);
        for(int j = 0; j < N; j++){
            cout << visited[j] << " ";
        }
        cout << '\n';
    }
}