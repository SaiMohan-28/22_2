#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stu1
{
	char name[100];
}STU1;	
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
	//printf("%s\n",s1->name);
	
	STU1 s2;
	printf("enter name\n");
	scanf("%s",s2.name);
	//printf("%s\n",s2.name);
	int i=0;
	while(s1->name[i]!=0 && s2.name[i]!=0 && s1->name[i]==s2.name[i])
	{
		i++;
	}
	if(s1->name[i]==s2.name[i])
	printf("same\n");
	else
	printf("Not same\n");
	return 0;
}
