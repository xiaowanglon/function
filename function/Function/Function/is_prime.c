#define _CRT_SECURE_NO_WARNINGS
////逻辑1：该数x 对2到x-1，取余，结果不为0则是素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return -1;
//	}
//	return 1;
//}

//逻辑2（优化）：非素数x能被x平方根整除
#include <math.h>
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i <=sqrt(x); i++)
	{
		if (x % i == 0)
			return -1;
	}
	return 1;
}