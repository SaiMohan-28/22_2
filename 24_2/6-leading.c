#include<stdio.h>
#define SIZE sizeof(int)*8
int main()
{
	int n,count=0,t,i=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=SIZE-1;i>=0;i--)
	{
		if((n>>i)&1)
		break;
		count++;
	}	
	printf("number of leading zeros are %d\n",count);
return 0;
}
