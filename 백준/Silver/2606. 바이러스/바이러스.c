#include <stdio.h>
#include <stdlib.h>

int graph[100][100];
int visited[100];
int virus = 0;

void check_connect();

int main(){
	int numComputers;
	scanf("%d",&numComputers);
	int numLines;
	scanf("%d",&numLines);
	
	int x,y;
	for(int i = 0; i < numLines; i++){
		scanf("%d %d",&x,&y);
		graph[x-1][y-1] = 1;
		graph[y-1][x-1] = 1;
	}
	visited[0] = 1;
	check_connect(numComputers,0);
	printf("%d\n",virus);
}

void check_connect(int n, int k){
	for(int i = 0; i < n; i++){
		if(visited[i] == 0 && graph[k][i] == 1){
			visited[i] = 1;
			check_connect(n,i);
			virus++;
		}
	}
}