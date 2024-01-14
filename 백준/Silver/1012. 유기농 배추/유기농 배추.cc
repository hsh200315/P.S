#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int land[50][50];
int check[50][50];
int x,y,num_cabbage,tmp_x,tmp_y;
int num_earthworm;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool dfs(int x, int y){
	if(check[x][y] == 1 || land[x][y] == 0)
		return false;
	check[x][y] = 1;
	for(int j = 0; j < 4; j++){
		int next_x = x + dx[j];
		int next_y = y + dy[j];
		
		if((next_y >= 0 && next_x >= 0) && (next_x < 50 && next_y <50)){
			dfs(next_x,next_y);
		}
	}
	return true;
}

int main(){
	int test_case = 0;
	cin >> test_case;
	
	for(int i = 0; i < test_case; i++){
		memset(land,0,sizeof(land));
		memset(check,0,sizeof(check));
		
		scanf("%d %d %d",&x,&y,&num_cabbage);
		for(int j = 0; j < num_cabbage; j++){
			scanf("%d %d",&tmp_x,&tmp_y);
			land[tmp_x][tmp_y] = 1;
		}
		
		num_earthworm = 0;
		for(int j = 0 ; j < 50; j++){
			for(int q = 0; q < 50; q++){
				if(land[j][q] == 1 && check[j][q] == 0){
					num_earthworm += 1;
					dfs(j,q);
				}
			}
		}
		cout << num_earthworm << endl;
	}
}