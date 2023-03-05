#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//15829


int main(void)
{
	int N;
	scanf("%d",&N);
	char a[51];
	scanf("%s",a);
	
	int num;
	long long int sum = 0;
	for(int i = 0; i < N; i++)
	{
		num = (int)(a[i]);
		num -= 96;
		num = num * pow(31,i);
		num %= 1234567891;
		sum += num;
		sum = sum % 1234567891;
	}
	printf("%lld\n",sum);
}