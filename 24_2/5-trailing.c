#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
	int n,count=0;
	printf("enter number\n");
	scanf("%d",&n);
	int t=n;
	while((n&1)==0)
	{
		count++;
		n=n>>1;
	}
	printf("number of zeros in %d is %d\n",t,count);
	return 0;
}
