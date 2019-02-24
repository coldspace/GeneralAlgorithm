#include "GeneralAlgorithm.h"
#include <stdio.h>
#include <malloc.h>

void Merge(int *a, int right, int mid, int left)
{
	int *tmp = (int *)malloc((left - right + 1) * sizeof(int)); // ����0~2�����ٵ�3���ռ䣬ע��Ҫ��1

	int i = right;
	int j = mid + 1;
	int k = 0;

	if (left == 17)
	{
		printf("17");
	}

	while (i<=mid && j <= left)  //  �����������е�����
	{
		if (a[i] < a[j])
			tmp[k++] = a[i++];
		else
			tmp[k++] = a[j++];
	}

	while (i <= mid)
	{
		tmp[k++] = a[i++];
	}

	while (j <= left)
	{
		tmp[k++] = a[j++];
	}

	for (int b = 0; b < k; b++)
	{
		a[right + b] = tmp[b];
	}

	free(tmp);
}

/*
���ܣ��鲢����
�ص㣺���õݹ�ķ�ʽ, ʱ�临�Ӷ�nlog(n),�������·�ʽ
������a������
start��������ʼλ��
end���������λ��
�������鶨��a[len]����ʼ�ͽ����ķ�Χ��0~len-1
*/
void MergeSort1(int *a, int start, int end)
{
	// ��ֽ�������
	if (a == NULL || start >= end)
		return;

	int mid = (end + start) / 2;

	// �����в�ͣ�Ĳ�ֳ�2�ԣ�ֱ�����ܲ��
	MergeSort1(a, start, mid);
	MergeSort1(a, mid + 1, end);  // ע���1

	//�鲢��һ��
	Merge(a, start, mid, end);
}
