#include<stdio.h>
#include<stdbool.h>
void a(int arr[],int k,int n)
{
	int left = 0;
	int right = n-1;
	 bool flag = false;
	while (left<=right)
	{
		int mid = (right - left) / 2 + left;
		if (arr[mid] == k)
		{
			printf("下标为%d", mid);
			flag = true;
			break;
		}
		else
		{
			if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	if (!flag)
	{
		printf("找不到");
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 0;

	a(arr,k,n);

	return 0;
}