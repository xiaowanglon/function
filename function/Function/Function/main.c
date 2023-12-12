#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入：数组，数组长度，6
//返回：6 的下标,无则-1
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

////打印1000~2000年之间的闰年
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
//	printf("共%d年\n", count);
//	return 0;
//}

//// 输出100以内的素数
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
//	printf("共%d个\n",count);
//	return 0;
//}