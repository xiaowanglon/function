#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���룺���飬���鳤�ȣ�6
//���أ�6 ���±�,����-1
#include "subscript.h"
int main()
{
	int k =66;
	char arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d\n", sz);
	int res = subscript(arr1, sz, k);
	printf("%d\n", res);
	return 0;
}

////��ӡ1000~2000��֮�������
//#include "is_leap.h"
//int main()
//{
//	int year = 1000;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("��%d��\n", count);
//	return 0;
//}

//// ���100���ڵ�����
//#include "is_prime.h"
//int main()
//{
//	int num = 100;
//	int j = 1;
//	int count = 0;
//	for (j = 2; j <= num; j++)
//	{
//		if (is_prime(j) == 1)
//		{
//			count++;
//			printf("%d  ", j);
//
//		}
//	}
//	printf("��%d��\n",count);
//	return 0;
//}