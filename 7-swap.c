#include<stdio.h>
#define S 5
void swap(int *const a,int *const b)
{
	int temp=0;
	for(int i=0;i<S;i++)
	{
		temp = *(a+i);
		*(a+i) = *(b+i);
		*(b+i)+= temp;
	}
}
int main()
{
	int a[S],b[S];
	void (*fp)(int *const, int *const);
	printf("enter elements in 1st array\n");
	for(int i=0;i<S;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements in 2nd array\n");
	for(int i=0;i<S;i++)
	{
		scanf("%d",&b[i]);
	}
	fp=swap;
	(*fp)(a,b);
	printf("after swapping\n");
	for(int i=0;i<S;i++)
	{
		printf("a = %db = %d\n",a[i],b[i]);
	}
	printf("\n");
	return 0;
}
