#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int a;
	struct st *next;
}ST;
int main()
{
	ST *new=0,*head=0,*latest=0,*t=0,*s=0;
	for(int i=1;i<=5;i++)
	{
	new=(ST*)malloc(sizeof(ST));
	new->next=NULL;
	printf("enter data\n");
	scanf("%d",&new->a);
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		latest->next=new;
	}
		latest=new;
	}
	printf("*Data Is*\n");
	while(head)
	{
		printf("%d\n",head->a);
		head=head->next;
	}
return 0;
}
