#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//15829


int main(void)
{
	int N;
	scanf("%d",&N);
	char a[51];
	scanf("%s",a);
	int R = 1;
	int num;
	long long sum = 0;
	for(int i = 0; i < N; i++)
	{
		num = (int)(a[i]);
		num -= 'a' -1;
		sum = (sum + num * R)%1234567891;
		R = R*31;
	}
	printf("%lld\n",sum);
}