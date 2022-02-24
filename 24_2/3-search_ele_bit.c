#include<stdio.h>
#define S 10
int main()
{
	int n,flag=1,arr[S];
	for(int i=0;i<S;i++)
	{
		
	}
	printf("enter element\n");
	scanf("%d",&n);
	for(int i=0;i<S;i++)
	{
		if((arr[i]^n)==0)
		{
			flag=0;
			break;
		}	
	}
	if(flag==0)
	printf("element found\n");
	else
	printf("not found\n");	
	return 0;
}

