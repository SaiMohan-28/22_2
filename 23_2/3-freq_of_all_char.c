#include<stdio.h>
#include<stdlib.h>
#define S 50
#include<string.h>
/*void freq(char *s)
{
	int count=0;
	char i;
	for(i=97;i<=122;i++)
	{
		count=0;
		for(int j=0;s[j]!='\0';j++)
		{
			if(i==s[j]);
			count++;
		}
		if(count>0)
		printf("%c is %d times\n",i,count);
	}
}*/
int main()
{
	char s[S],i;
	int count=0;
	printf("enter string");
	scanf("%s",s);
	//void (*fp)(char *);
	//fp=freq;
	//fp(s);
	for(i=97;i<=122;i++)
	{
		count=0;
		for(int j=0;j<strlen(s);j++)
		{
			if(i==s[j]);
			{
			count++;
			}
		}
		if(count>0)
		printf("%c is %d times\n",i,count);
	return 0;
	}
}
