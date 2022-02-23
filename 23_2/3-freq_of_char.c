#include<stdio.h>
#define S 50
static int count=0;
int freq(char *a,char c)
{
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]==c)
		count++;
	} 
	return count;
}
int main()
{
	char s[S],c;
	printf("enter string\n");
	scanf("\n%s",s);
	printf("enter character\n");
	scanf("\n%c",&c);
	int (*fp)(char *,char);
	fp=freq;
	fp(s,c);
	printf("freq=%d\n",count);
	return 0;
}	
