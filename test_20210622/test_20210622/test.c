#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
//实现一个冒泡排序，可以排序各种类型的数
void swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const*e1, const*e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		//一趟冒泡排序
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int cmp_struct_stu_s_
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test()
{
	int i = 0;
	int arr[5] = { 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();
	return 0;
}



//实现降序
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 > *(float*)e2)
//	{
//		return -1;
//	}
//	else if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//void test1()
//{
//	float f[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", f[i]);
//	}
//}
//
////实现升序
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test2()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}




//void bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		//一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = -1;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void qsort(
//	void *base,
//	size_t num,
//	size_t width,
//	int(__cdecl *compare)(const void *, const void *)
//	);
//struct stu
//{
//	char name[20];
//	int age;  
//};
//int main()
//{
//	int i = 0;
//	int arr[10] = { 9, 8, 7, 6, 1, 4, 3, 2, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 21 }, { "wangwu", 19 } };
//
//	qsort();
//
//	//bubble_sort(arr,sz); 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//
//	void(*signal(int,void(*)(int)))(int);
//	typedef void(*pfun)(int);
//	pfun signal(int, pfun);//与第九句话相等
//
//	int(*pa[5])(int, int);//函数指针数组
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int(*pa)[] = &arr;
//	//函数指针
//	int(*pfun)(int x, int y) = Add;
//	//函数指针的数组
//	int(*pArr[5])(int x, int y);
//	//指向函数指针数组的指针
//	int(*(*pf)[5])(int x, int y) = &pArr;
//	return 0;
//}