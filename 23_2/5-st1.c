#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	char c;
	struct st *next;
}st1;
int main()
{
	st1 *node=NULL,*node1=NULL;
	node=(st1*)malloc(sizeof(st1));	
	node1=(st1*)malloc(sizeof(st1));
	printf("%p\n",node);
	node->c='a';
	node->next=node1;
	printf("%p\n",node1);
	node1->c='b';
	node1->next=NULL;
	printf("%ld\n",sizeof(st1));
	printf("%p\n",node->next);
	printf("%p\n",node1);
	printf("%c\n",node->next->c);
	printf("%p\n",node->next->next);
	return 0;
}
