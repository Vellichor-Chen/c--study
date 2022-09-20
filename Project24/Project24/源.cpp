#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < x;i++)
//	{
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	/*int* p = NULL;
//	char* pc = NULL;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int(* p)[10] = &arr;*/
//
//	//char* arr[5];
//	//char*(*pa)[5] = &arr;
//
//	//int arr[10] = { 0 };
//	//int(*pa)[10] = &arr;
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d",(*pa)[i]);
//		printf("%d", arr + i);
//		printf("%d", *(pa+i));
//
//	}*/
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}

//void print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0;i < x;i++)
//	{
//		int j = 0;
//		for (j = 0;j < y;j++)
//		{
//			printf("%d ",*(*(p + i) + j));
//			printf("%d ", (*(p+i)[j]));
//			printf("%d ",p[i][j]);
//
//		}
//	
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	int* arr[10];
//	char* ch[5];
//	int(*pa)[5];
//	int(*parr3[10])[5];
//	int arr2[5];
//	int (* pp)[5] = &arr2;
//
//	return 0;
//}
//
//void test(int(*arr)[5])
//{
//
//}
//
//int main()
//{
//
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//void test(int** p)
//{
//
//}
//int main()
//{
//	int* p;
//	test(&p);
//	int** pp = &p;
//	test(pp);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	printf("%p", Add);
//	printf("%p", &Add);
//	int(*pa)(int,int) = &Add;
//	int ret = (*pa)(2, 3);
//	printf("%.......")
//
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello");
//	return 0;
//}


typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);

typedef unsigned int uint;

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int* arr[5];
	int (*pa[4])(int, int)= {add,sub,mul,div};
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		pa[i](2, 3);
	}
	return 0;
}

char* my_strcpy(char* dest, const char* src)
{

}

char(*pf)(char*, char*);
char(*pff[4])(char*,char*)

