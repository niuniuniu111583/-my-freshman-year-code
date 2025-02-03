//Debug调试版本(包含调试信息，不做优化)
//Release发布版本（不包含调试信息，可能存在优化）
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//c/c++ vs中
//F9:创建断点
//F5:调到下一个断点（执行逻辑上的断点，可能循环中a断点的下一个断点还是a断点）
//调试-窗口-自动窗口-（自动显示当前作用域内的局部变量和函数参数值，随代码执行，值会自动更新）
//条件断点：右击断点-可设置断点停的条件。


//n的阶乘
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		int ret = 1;
//		for (int i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//优化
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1;n <= 3;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0;i <= 12;i++)
	{
		arr[i] = 0;//1.越界。2.非法访问内存
		printf("hehe\n");
	}
	return 0;
}
//结果：无限打印hehe
//调试