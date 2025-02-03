#include<stdio.h>
int search(int* nums, int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            left = mid + 1;
        else if (target < nums[mid])
            right = mid - 1;
    }
    return -1;
}
int main()
{
    int nums[] = { 10,14,19,26,27,31,33,35,42,44 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    scanf_s("%d", &target);
    printf("%d在数组下标为%d的位置", target,search(nums,n,target));
    return 0;
}
