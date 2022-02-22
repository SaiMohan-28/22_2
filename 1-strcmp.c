#include<stdio.h>
#define S 50
enum res{equal,notequal};
enum res cmp(char const *a,char const *b)
{
	int i=0;
	while(*a!=0 && *b!=0 && *a ==*b)
	{
		*a++;
		*b++;
	}
	if(*a==*b)
		return equal;
	else 
		return notequal;
}
int main()
{
	char a[S],b[S];
	enum res (*fp)(char *,char *);
	printf("enter string:\n");
	scanf("%s%s",a,b);
	fp=cmp;
	if((fp)(a,b)==0)
	printf("Same\n");
	else
	printf("Not Same\n");
	return 0;
}
