#define S 5                           
#include<stdio.h>
void swap(int * const arr,int * const brr);                    
int main()
{
	int a[S] = {1,2,3,4,5},b[S] = {6,7,8,9,10};

	printf("before swapping\n");

	for(int i=0;i<S;i++)
	{	
		printf("a = %d,b = %d\n",a[i],b[i]);
	}
	
	void (*fptr)(int *const a,int *const b);       
	fptr=swap;                                       
	fptr(a,b);                         
	printf("after swapping\n"); 
	for(int i=0;i<S;i++)
	{	
		printf("a = %d,b = %d\n",a[i],b[i]);
	}
}

void swap(int * const a,int * const b)
{
	int i=0,tmp;
        for(i=0;i<S;i++)
	{
	       	tmp = *(a+i);
        	*(a+i) = *(b+i); 
        	*(b+i) = tmp;
	}
}
