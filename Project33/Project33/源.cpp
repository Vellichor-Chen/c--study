#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	int n = 0;
//	int arr[0];
//};
//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//
//	return 0;
//}
//

//struct S
//{
//	int n;
//	char c;
//	int arr[0];
//	//int arr[];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 10);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//
//}

struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*) malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		p->arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}