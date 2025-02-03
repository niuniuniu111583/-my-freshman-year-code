//vs2022默认使用msvc的编译器不支持C99中的变长数组，可以在dev上（gcc编译器）
//变长数组variable-length array(VLA)
//使用变量指定数组大小,不可以初始化
//在VS上安装clang编译组件（苹果）
#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int arr[n];
	for (int i = 0;i < n;i++)
	{
		arr[i] = i;
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}