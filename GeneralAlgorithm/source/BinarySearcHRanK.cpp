#include "GeneralAlgorithm.h"
#include <stdio.h>

/*
���ܣ���������ж��ַ�����
�ص㣺����whileѭ����������������С��������
���ԣ���a==NULLʱ�����Զ���һ��0~9���������ڲ��ԣ���ʱlen��Ч
*/
int BinarySearcHRanK1(int key, const int *a, int len)
{
	if (a == NULL)  //����ʹ��
	{
		int temp[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		len = 10;
		a = temp;
	}

	int start = 0;
	int end = len - 1;

	while (1)
	{
		int mid = start + (end - start) / 2 + 1;  //���賤��Ϊ 5��mid = 2. ���賤��Ϊ6��mid = 2��

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
���ܣ���������ж��ַ�����
�ص㣺���õݹ�ķ�ʽ��������������С��������
���ԣ���a==NULLʱ�����Զ���һ��0~9���������ڲ��ԣ���ʱlen��Ч
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
