#ifndef GENERALALGORITHM_H
#define GENERALALGORITHM_H

#ifdef dll_export
#define CALL_Dll extern "C" __declspec(dllexport)  // ��ʱΪ���� dll��Ϊ��֤���ݣ������� C �ķ�ʽ 
#else
#define CALL_Dll extern "C" __declspec(dllimport)  // ��ʱΪ���� dll��Ϊ��֤���ݣ������� C �ķ�ʽ 
#endif 

/*
���ܣ���������ж��ַ�����
�ص㣺����whileѭ����������������С��������
���ԣ���a==NULLʱ�����Զ���һ��0~9���������ڲ��ԣ���ʱlen��Ч
*/
CALL_Dll int BinarySearcHRanK1(int key, const int *a,int len);

/*
���ܣ���������ж��ַ�����
�ص㣺���õݹ�ķ�ʽ��������������С��������
���ԣ���a==NULLʱ�����Զ���һ��0~9���������ڲ��ԣ���ʱlen��Ч
*/
CALL_Dll int BinarySearcHRanK2(int key, const int *a, int len);

/*
���ܣ��鲢����
�ص㣺���õݹ�ķ�ʽ, ʱ�临�Ӷ�nlog(n),�������·�ʽ
������a������
      start��������ʼλ��
	  end���������λ��
	  �������鶨��a[len]����ʼ�ͽ����ķ�Χ��0~len-1
*/
CALL_Dll void MergeSort1(int *a, int start, int end);

#endif