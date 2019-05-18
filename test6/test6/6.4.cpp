#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int init(int arr[], int size)
{
	int i = 0;
	for (i = 0; i<size; i++)
		scanf("%d", &arr[i]);
}
int empty(int arr[], int size)
{
	int i = 0;
	for (i = 0; i<size; i++)
		arr[i] == '\0';
}
int reverse(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int print(int arr[], int size)
{
	int i = 0;
	for (i = 0; i<size; i++)
		printf("%d", arr[i]);
	printf("\n");
}
int main()
{
	int arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	init(arr, size);
	print(arr, size);
	empty(arr, size);
	print(arr, size);
	reverse(arr, size);
	print(arr, size);
	system("pause");
	return 0;
}
