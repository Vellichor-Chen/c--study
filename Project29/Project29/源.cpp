#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret; //返回目的空间的起始位置
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//1.找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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
//
//}


//// 
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0; 
//		}
//		str1++;
//		str2++;
//	}
//	return (* str1 - *str2);
//	/*if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//}
//int main()
//{
//	const char* p1 = "abcef";
//	const char* p2 = "abwer";
//	int ret = my_strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	/*char arr1[30] = "abc";
//	char arr2[0] = "hello bit";
//	strcpy(arr1, arr2);*/
//	/*char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4); */
//	//const char* p1 = "abcdef";
//	//const char* p2 = "abcqwer";
//	////int ret = strcmp(p1, p2);
//	//int ret = strncmp(p1, p2, 3);
//	//printf("%d\n", ret);
//
//	const char* p1 = "abcdefghi";
//	const char* p2 = "def";
//	const char*ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//char* my_strstr(const char*p1,const char*p2)
//{
//	assert(p1 && p2);
//	const char* s1 = p1;
//	const char* s2 = p2;
//	const char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s2!='\0')&& (*s1 == *s2)&&(*s1!='\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//}
//int main()
//{
//	const char* p1 = "abcdefghi";
//	const char* p2 = "def";
//	const char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//int main()
//{
//	char arr[] = "cyh@qq.com";
//	const char* p = "@.";
//	//strtok(arr, p);
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n");
//	}
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}

#include<errno.h>
//int main()
//{
//	char* str = strerror(errno);//errno全局的错误码的变量
//	printf("%s\n", str);
//	return 0;
//}


int main()
{
	FILE*pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("Success\n");
	}
	return 0;
}