#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pF = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pF);
//	*pF = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pF);
//	return 0;
//}

//
//int main()
//{
//	//float f = 5.5;
//	//101.1
//
//	return 0;
//}


int main()
{
	/*char ch = 'w';
	char* pc = &ch;*/

	//char arr[] = "abcdef";
	//char* pc = arr;
	//printf("%s\n", arr);
	//printf("%s\n", pc);

	//char* p = "abcdef";
	//const char* p = "abcdef";
	//printf("%s\n", p);
	//printf("%c\n", p);
	

	/*const char* p = "abcdef";//常量字符串
	*p = 'w';*/
	//error


	//int arr[10] = { 0 };
	//char ch[5] = { 0 };
	//int* p[4];//指针数组
	//char* pch[10];

	/*int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = { &a,&b,&c,&d };
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		printf("%d ", *(arr[i]));
	}*/

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };




	return 0;
}