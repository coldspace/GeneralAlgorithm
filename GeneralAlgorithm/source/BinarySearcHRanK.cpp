#include "GeneralAlgorithm.h"
#include <stdio.h>

/*
功能：对数组进行二分法查找
特点：采用while循环，输入数组必须从小到大排序
测试：当a==NULL时，会自定义一个0~9的数组用于测试，此时len无效
*/
int BinarySearcHRanK1(int key, const int *a, int len)
{
	if (a == NULL)  //测试使用
	{
		int temp[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		len = 10;
		a = temp;
	}

	int start = 0;
	int end = len - 1;

	while (1)
	{
		int mid = start + (end - start) / 2 + 1;  //假设长度为 5，mid = 2. 假设长度为6，mid = 2。

		printf("%d %d \n", start, end);

		if (((end - start) == 1) && (key != a[mid]))
			return -1;

		if (key > a[mid])
			start = mid;
		else if (key < a[mid])
			end = mid;
		else
			return mid;
	}
}


int rank(int key, const int *a, int lo, int li)
{
	printf("%d %d \n", lo, li);

	int mid = lo + (li - lo)/2 + 1;

	if (((li - lo) == 1) && (key != a[mid]))
	{
		return -1;
	}

	if (key > a[mid])
		return rank(key, a, mid, li);
	else if (key < a[mid])
		return rank(key, a, lo, mid);
	else
		return mid;
}

/*
功能：对数组进行二分法查找
特点：采用递归的方式，输入数组必须从小到大排序
测试：当a==NULL时，会自定义一个0~9的数组用于测试，此时len无效
*/
int BinarySearcHRanK2(int key, const int *a, int len)
{
	if (a == NULL)
	{
		int temp[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		len = 10;
		a = temp;
	}

	int start = 0;
	int end = len - 1;

	return rank(key, a, start, end);
}
