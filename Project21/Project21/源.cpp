#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* s = str;
//	char* e = str;
//	while (*e !='\0')
//	{
//		e++;
//	}
//	return e - s;
//}
//int main()
//{
////	int a = 10;
////	int* p = &a;
//
//	//printf("%d\n", sizeof(char*));
//
//	//int a = 0X11223344;
//	//char* pc = &a;
//	//*pc = 0;
//	//int* pa = &a;
//	//*pa = 0;
//
//	//int* p = NULL;
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);*/
//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = arr[left];
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int tmp = 0;
	int i = 0;
	for (i = 0;i < sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}