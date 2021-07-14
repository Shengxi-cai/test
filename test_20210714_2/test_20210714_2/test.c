#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//一个数组中两个数出现了一次，其他数出现了2次，求出这个出现一次的数
int main()
{
	int arr[] = { 2, 2, 3, 3, 5, 5, 4, 7, 8, 6, 7, 8 };
	int i = 0;
	int x1 = 0;
	int x2 = 0;
	int num = 0;
	for (i = 0; i < 12; i++)
	{
		num ^= arr[i];
	}
	int m = 0;
	while (m<32)
	{
		if (num&(1 << m))
		{
			break;
		}
		else
		{
			++m;
		}
	}
	
	for (i = 0; i < 12; i++)
	{
		if (arr[i] & (1 << m))
		{
			x1 ^= arr[i];	
		}
		else
		{
			x2 ^= arr[i];	
		}
	}
	
	printf("%d %d\n", x1, x2);
	return 0;
}


//int main()
//{
//	int arr[] = { 2, 2, 3, 3, 5, 5, 4, 7, 8, 6, 7, 8 };
//	int i = 0;
//	int x1 = 0; 
//	int x2 = 0;
//	int num = 0;
//	for (i = 0; i < 12; i++)
//	{
//		num ^= arr[i];
//	}
//	int m = 0;
//	while (m<32)
//	{
//		if (num&(1 << m))
//		{
//			break;
//		}
//		else
//		{
//			++m;
//		}
//	}
//	int p = 0;
//	int n = 0;
//	int arr2[12] = { 0 };
//	int arr3[12] = { 0 };
//	for (i = 0; i < 12; i++)
//	{
//		if (arr[i] & (1 << m))
//		{
//		
//			arr2[p] = arr[i];
//			++p;
//		}
//		else
//		{
//		
//			arr3[n] = arr[i];
//			++n;
//		}
//	}
//	for (i = 0; i < 12; i++)
//	{
//		x1 ^= arr2[i];
//	}
//	for (i = 0; i < 12; i++)
//	{
//		x2 ^= arr3[i];
//	}
//	printf("%d %d\n", x1, x2);
//	return 0;
//}
////求一个[0.n]之间缺少的那个整数
////用异或来求解
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 5, 6, 7, 8, 9 };
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		num = num^arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		num = num^i;
//	}
//	printf("%d\n", num);
//	return 0;
//}