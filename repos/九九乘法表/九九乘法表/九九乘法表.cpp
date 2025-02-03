/*#include<stdio.h>
int main()
{
	for (int i = 1;i <= 9;i++)//外层循环控制行
	{
		for (int j = 1;j <= i;j++)//内层循环控制列
		{
			printf("%d*%d=%d\t", i, j, i * j);//打印乘法表的每一项
		}
		printf("\n");//每完成一行以后换行
	}
	return 0;
}*/
//
//#include<stdio.h>
//
//int main()
//{
//	int num = 1;
//	scanf_s("%d", &num);
//	while (num)
//	{
//
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char s[80], t;
	fgets(s,sizeof(s),stdin );
	int n, i;
	n = strlen(s);
	for (i = 0;i < (n / 2);i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
	printf("%s", s);
	return 0;
}