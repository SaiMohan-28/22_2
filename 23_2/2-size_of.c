#include<stdio.h>
#define size_of(dt) (char*)(&dt+1)-(char*)(&dt)
int main()
{
	int a;
	char b;
	double d;
	float f;
	printf("int=%ld\nchar=%ld\ndouble=%ld\nfloat=%ld\n",size_of(a),size_of(b),size_of(d),size_of(f));
	return 0;
}
