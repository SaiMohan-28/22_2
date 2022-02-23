#include<stdio.h>
#define S 20
void mem_cpy(char *de,char *so,int n)
{
	for(int i=0;i<n;i++)
	{
		de[i]=so[i];
	}
}
int main()
{
	char so[S],de[25]={'\0'};
	printf("enter data\n");
	scanf("%s",so);
	printf("%s\n%s\n",so,de);
	mem_cpy(de,so,2);
	printf("%s\n",de);
	return 0;
}
