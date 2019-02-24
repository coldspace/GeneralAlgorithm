#ifndef GENERALALGORITHM_H
#define GENERALALGORITHM_H

#ifdef dll_export
#define CALL_Dll extern "C" __declspec(dllexport)  // 此时为生成 dll，为保证兼容，限制以 C 的方式 
#else
#define CALL_Dll extern "C" __declspec(dllimport)  // 此时为导入 dll，为保证兼容，限制以 C 的方式 
#endif 

/*
功能：对数组进行二分法查找
特点：采用while循环，输入数组必须从小到大排序
测试：当a==NULL时，会自定义一个0~9的数组用于测试，此时len无效
*/
CALL_Dll int BinarySearcHRanK1(int key, const int *a,int len);

/*
功能：对数组进行二分法查找
特点：采用递归的方式，输入数组必须从小到大排序
测试：当a==NULL时，会自定义一个0~9的数组用于测试，此时len无效
*/
CALL_Dll int BinarySearcHRanK2(int key, const int *a, int len);

/*
功能：归并排序
特点：采用递归的方式, 时间复杂度nlog(n),从上往下方式
参数：a：数组
      start：排序起始位置
	  end：排序结束位置
	  假设数组定义a[len]，起始和结束的范围在0~len-1
*/
CALL_Dll void MergeSort1(int *a, int start, int end);

#endif