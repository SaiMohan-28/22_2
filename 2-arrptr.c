#include<stdio.h>
void prnt(char **arr)
{
for(int i=0;i<5;i++)
{
	printf("%c\t",(*arr)[i]);
}
printf("\n");
}
int main()
{	
	char c[5]={'a','e','i','o','u'};
	char (*arr)[5]={&c};
	prnt(&arr);
	return 0;
}
