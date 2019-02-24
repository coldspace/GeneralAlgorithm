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

	while (start < end)
	{
		int mid = start + (end - start) / 2;  //���賤��Ϊ 5��mid = 2. ���賤��Ϊ6��mid = 2��

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
