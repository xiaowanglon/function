#define _CRT_SECURE_NO_WARNINGS
//Âß¼­£¬(4&& !100)||400
int is_leap(int x)
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
		return 1;
	else
		return -1;
}