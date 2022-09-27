#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<memory.h>
#include<assert.h>
//struct s
//{
//	char name[20];
//	int age;
//};
void* my_memcpy(void* dest, const void* src, size_t num)
{
	
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	void* ret = p1;
	assert(dest && src);
	while (num--)
	{
		*p1 = *p2;
		++p1;
		++p2;
	}
	return ret;
	//++的意思是有一个变量找到地址才能++，强制类型转换是运算的结果，是右值，
	//右值是临时的，找不到地址
}


//c语言标准规定
//memcpy只要处理不重复的拷贝就可以
//memmove处理内容重复的拷贝
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	void* ret = p1;
	if (p1<p2)
	{
		//前-》后
		while (num--)
		{
			*p1 = *p2;
			++p1;
			++p2;
		}
	}
	else
	{
		//后-》前
		while (num--)
		{
			*(p1 + num) = *(p2+num);
		}
	}
	return ret;
	//if (p1 < p2||p1>p2+num)
	//{
	//	//前-》后
	//}
	//else
	//{
	//	//后-》前
	//}
}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memcpy(arr + 2, arr, 20);
//	my_memmove(arr + 2, arr, 20);
//	//memcpy(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct s arr3[] = { {"zhangshan",20},{"lisi",30} };
//	struct s arr4[] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr2, arr1, sizeof(1, 2, 3, 4, 5));
//	//strcpy(arr2, arr1);
//	//memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//


int main()
{
	//char arr[] = "0";
	//memset(arr, '#', 10);
	int arr[10] = { 0 };
	memset(arr, 1, 10);
	return 0;
}