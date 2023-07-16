#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int DP[300];

int calculatePoint(int* points,int destination){
	DP[0] = points[0];
	DP[1] = points[0] + points[1];
	if(points[0] + points[2] > points[1] + points[2]){
		DP[2] = points[0] + points[2];
	}
	else{
		DP[2] = points[1] + points[2];
	}
	
	for(int i = 3; i < destination; i++){
		if(DP[i-2] + points[i] > DP[i-3] + points[i-1] + points[i])
			DP[i] = DP[i-2] + points[i];
		else
			DP[i] = DP[i-3] + points[i-1] + points[i];
	}
}

int main(){
	int stairNum;
	int pointArr[300];
	scanf("%d",&stairNum);
	for(int i = 0; i < stairNum; i++){
		scanf("%d",&pointArr[i]);
	}
	//계단 값 입력
	int q;
	q = calculatePoint(pointArr,stairNum);
	printf("%d\n",DP[stairNum-1]);
}