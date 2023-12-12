#define _CRT_SECURE_NO_WARNINGS
int subscript(char arr[], int x, int y)
{
	int left = 0;
	int right = x - 1;
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < y)
		{
			left = mid+1;
		}
		else if (arr[mid] > y)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}