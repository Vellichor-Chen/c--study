 #define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pfarr[4])(int, int);
//	int(*(*ppfarr)[4])(int,int) = &pfarr;
//	int(*pf)(int, int);
//
//	return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//int Add(int, x, int, y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];
//	int* (*pa)[10] = &arr;
//	int(*p)(int, int) = Add;
//	int sum = (*p)(1, 2);
//	printf("%d\n", sum);
//	return 0;
//}

//
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
//	float f[4] = {9.0,8.0,7.0,6.0};
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	/*int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));*/

	/*const char* a[] = { "work","at","alll" };
	const char** pa = a;
	pa++;
	printf("%s\n", *pa);*/


	return 0;
}