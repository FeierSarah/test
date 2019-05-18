#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int HalfSearchArray(int arr[], int left, int right, int f)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid]>f)
		{
			right = mid - 1;
		}
		else if (arr[mid]<f)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, f, left;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	scanf("%d", &f);
	int ret = HalfSearchArray(arr, left, right, f);
	if (ret)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}
