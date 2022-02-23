#include<stdio.h> 
struct rect
{
	unsigned int len;	
	unsigned int width;
	unsigned int area;
};
unsigned int area(struct rect r)
{
	return r.len*r.width;	
}
void swap(struct rect *r)
{
	int temp;
	temp=r->len;
	r->len=r->width;
	r->width=temp;
	printf("len=%d\twidth=%d\n",r->len,r->width);
}
int main()
{
	struct rect r = {15,20};
	swap(&r);
	unsigned int (*fp)(struct rect);
	fp=area;
	int res=fp(r);
	printf("%d\n",res);
	return 0;
}
