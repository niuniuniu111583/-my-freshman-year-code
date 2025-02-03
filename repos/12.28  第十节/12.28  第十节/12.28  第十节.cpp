#include<stdio.h>
//void print(int x)
//{
//	if (x==1)
//		return;
//	printf("se");
//}
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	print(x);
//	return 0;
//}

void set_arr(int arr[],int n)
{
	for (int i = 0;i < n; i++)
		arr[i] = -1;
}
void print_arr(int arr[], int n)
{
	for (int i = 0;i < n; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, sz);
	print_arr(arr, sz);
	return 0;
}