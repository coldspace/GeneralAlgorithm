#include "GeneralAlgorithm.h"
#include "stdio.h"

void main()
{
	int temp[] = { 1, 4, 2, 6, 8, 2, 4, 5, 3, 9, 4, 5, 9, 4, 2, 1, 7, 0 };

	MergeSort1(temp, 0, 17);

	for (int i = 0; i < 17; i++)
	{
		printf("%d ",temp[i]);
	}
}