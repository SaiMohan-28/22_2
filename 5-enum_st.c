#include<stdio.h>
//#pragma pack(1)
typedef struct stu
{
	int a;
	enum e1{equal, notequal};
}s;
int main()
{
	printf("%ld\n",sizeof(s));
	return 0;
}
