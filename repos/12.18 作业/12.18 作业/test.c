#include "test.h"
void func1()
{
	printf("func\n");
}
int func2()
{ 
	int x ;
	scanf_s("%d", &x);
	return x;
}
void func3(int x,int y)
{
	printf("x+y=%d\n", x + y);
}
int func4(int x,int y)
{
	int z;
	z = x > y ? x:y;
	return z;
}