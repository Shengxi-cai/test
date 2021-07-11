#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int main()
{
	//fwrite("test.txt",)；
	return 0;
}

//int main()
//{
//
//	char arr[] = "zpw@bitedu.tech";
//	char *p = "@.";
//	char arr2[1024] = { 0 };
//	strcpy(arr2, arr);
//	char *ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//
	/*char arr2[] = "zpw@bitedu.tech";
	char *p = "@.";
	char arr[1024] = { 0 };
	strcpy(arr, arr2);

	char* ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	printf("%s\n", arr2);
	return 0;*/
//}

//求子字符串的函数
//char* my_strstr(char*p1, char*p2)
//{
//	char* s1;
//	char* s2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret)
//	{
//		printf("找到了:%p\n",ret);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//int my_strncmp(char* str1, char*str2, int count)
//{
//	while ((--count) && (*str1++ == *str2++))
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//	}
//	if (count==0)
//	{
//		return 0;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcxef";
//	char* p2 = "abcqwe";
//	int ret = my_strncmp(p1, p2,4);
//	if (ret > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

//递归实现求字符串的长度
//int my_strlen(char*str)
//{
//	if (*str)
//	{
//		return (1 + my_strlen(str++));
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//void my_strncat(char*dest,const char*src, int count)
//{
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while ((count)&&(*dest++=*src++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	else
//	{
//		*dest++ = '\0';
//	}
//}

//char * my_strncat(char* dest, char* src, int count)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		if ((*dest++ = *src++)=='\0')//if(!(*dest++=*src++))
//		{
//			return start;
//		}
//	}
//	*dest = '\0';
//	return start;
//}
//
//int main()
//{
//	char arr[20] = "abcdef\0xxxxxxxxxx";
//	char arr2[] = "qwert";
//	my_strncat(arr, arr2, 3);
//	printf("%s\n", arr);
//	return 0;
//}

//char* my_strncpy(char* dest, char*src, int count)
//{
//	char * start = dest;
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//}
//
//int main()
//{
//	char arr1[10] = "abcdefghij";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//字符串比较函数
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0' )
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "acdef";
//	char arr2[] = "abdef";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("arr1>arr2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1与arr2相等\n");
//	}
//	else
//	{
//		printf("arr1<arr2");
//	}
//	return 0;
//}

//char* my_strcat(char *dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcpy(char *arr1, const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	char* ret = arr1;
//	//拷贝字符串，包括"\0"
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}