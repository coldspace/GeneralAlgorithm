#include "GeneralAlgorithm.h"
#include <stdio.h>
#include <malloc.h>

void Merge(int *a, int right, int mid, int left)
{
	int *tmp = (int *)malloc((left - right + 1) * sizeof(int)); // 比如0~2，开辟的3个空间，注意要加1

	int i = right;
	int j = mid + 1;
	int k = 0;

	if (left == 17)
	{
		printf("17");
	}

	while (i<=mid && j <= left)  //  两个有序数列的排序
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
功能：归并排序
特点：采用递归的方式, 时间复杂度nlog(n),从上往下方式
参数：a：数组
start：排序起始位置
end：排序结束位置
假设数组定义a[len]，起始和结束的范围在0~len-1
*/
void MergeSort1(int *a, int start, int end)
{
	// 拆分结束条件
	if (a == NULL || start >= end)
		return;

	int mid = (end + start) / 2;

	// 将数列不停的拆分成2对，直到不能拆分
	MergeSort1(a, start, mid);
	MergeSort1(a, mid + 1, end);  // 注意加1

	//归并到一起
	Merge(a, start, mid, end);
}
