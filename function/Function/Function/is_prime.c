#define _CRT_SECURE_NO_WARNINGS
////�߼�1������x ��2��x-1��ȡ�࣬�����Ϊ0��������
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

//�߼�2���Ż�����������x�ܱ�xƽ��������
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