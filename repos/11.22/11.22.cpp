
//选择排序法

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,12,4,9,10,22,-7,0,99,8 };
//	//int n = sizeof(arr) / sizeof(arr[0]);
//	void selection(int arr[], int n);//声明：使arr[]排序
//    selection(arr, 10);//调用:arr[]的排序
//	return 0;
//}
//void selection(int arr[], int n)//定义selection排序函数
//{
//	int i, j, temp, min_idx;//min_idx表示最小元素的索引
//	for (i = 0;i < n - 1;i++)
//	{
//		min_idx = i;
//		for (j = i + 1;j < n;j++)//从已排序i往后找
//		{
//			if (arr[j] < arr[min_idx])//如果未排序部分有元素j小于索引min_idx表示的元素，则元素互换
//			{
//				temp = arr[j];
//				arr[j] = arr[min_idx];
//				arr[min_idx] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//}



#include <stdio.h>
	int main()
	{
		int x;
		float y;

		// ⽤⼾输⼊ " -13.45e12# 0" 
		scanf_s("%d%f", &x, &y);
		printf("%d %f", x, y);
		return 0;
	}


	