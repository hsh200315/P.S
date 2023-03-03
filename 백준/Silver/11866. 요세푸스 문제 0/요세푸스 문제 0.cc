#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N , K;
  scanf("%d %d",&N,&K);
  
  int* arr = (int*)malloc(sizeof(int)*N);
  for(int i = 0 ; i < N; i++)
  {
    arr[i] = i + 1;
  }
  int count = N;
  int index = -1;
  printf("<");
  while(count >= 2)
  {
    for(int i = 0; i < K; i++){
      index++;
      if(index > count - 1)
      {
        index -= count;
      }
    }
    printf("%d, ",arr[index]);
    for(int j = index+1; j < count; j++)
    {
      arr[j-1] = arr[j];
    }
    count--;
	index--;
  }
  printf("%d>",arr[0]);
 
  return 0;
}