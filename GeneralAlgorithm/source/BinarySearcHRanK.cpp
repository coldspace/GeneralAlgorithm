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

	while (start < end)
	{
		int mid = start + (end - start) / 2;  //假设长度为 5，mid = 2. 假设长度为6，mid = 2。

		if (key > a[mid])
			start++;
		else if (key < a[mid])
			end--;
		else
			return mid;
	}

	return -1;
}


int rank(int key, const int *a, int lo, int li)
{
	int mid = lo + (li - lo);

	if (lo > li)
		return -1;

	if (key > a[mid])
		return rank(key, a, lo + 1, li);
	else if (key < a[mid])
		return rank(key, a, lo, li - 1);
	else
		return mid;


}

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
