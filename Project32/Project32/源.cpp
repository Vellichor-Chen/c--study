#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	/*int n = 0;
//	scanf("%d", &n);
//	struct S arr[50];*/
//
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 1;i++)
//		{
//			*(p + i) = i;
//		}	
//		for (i = 0;i < 1;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 5;i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//�ռ䲻��
//	int*p2 = (int*)realloc(p, 40);
//	//p = realloc(p, 40);���պܴ�-������������
//
//	if (p2 != NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", p2 + i);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////*p=0//error
//	//if (p != NULL)
//	//{
//	//	int i = 0;
//	//	for (i = 0;i < 10;i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//	free(p);
//	//	p = NULL;
//	//	return 0;
//	//}
//	//2.�Զ�̬���ٵĿռ���е�Խ�����
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


