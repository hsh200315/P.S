#include <stdio.h>

//15829

#define M 1234567891

int main(void)
{
	int len;
	long long sum = 0, R = 1;
	char a[51];
	
	scanf("%d",&len);
	scanf("%s",a);
	int num;
	for(int i = 0; i < len; i++)
	{
		sum = (sum + (a[i] -'a' + 1) * R) % M;
		R = (R*31) % M;
	}
	printf("%lld\n",sum);
}