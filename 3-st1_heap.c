#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	char name[100];
	struct stu *next; 
	
}STU;
int main()
{
	STU *s1=NULL;
	s1=(STU *)malloc(sizeof(STU));
	printf("enter name\n");
	scanf("%s",s1->name);
	printf("%s\n",s1->name);
	return 0;
}
