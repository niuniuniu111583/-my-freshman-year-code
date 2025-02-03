#include<stdio.h>
#include "test.h"
int main()
{
	func1();
	printf("%d\n", func2());
	func3(50, 300);
	printf("%d\n", func4(50, 60));
	return 0;
}