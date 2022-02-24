#include<stdio.h>
int main()
{
	char a[20];
	int count=0,j;
	printf("enter string\n");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			break;
		}
		if(i==j)
		{
			count=1;
			for(j=j+1;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				count++;
			}
		printf("%c is %d times\n",a[i],count);
		}
	
	}
return 0;	
}
