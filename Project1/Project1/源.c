#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 'w';
	char*pc = &ch;
	*pc = 'a';
	printf(" %c\n", ch);



	//int a = 10;
	//int*p = &a;
	////printf("%p\n", &a);
	////printf("%p\n", p);
	//*p = 20;
	//printf("a = %d\n", a);

	return 0;
}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void test()
////{
//	 static int a = 1;//静态局部变量
//	a++;
//	printf("a = %d\n", a);
//}

//i//nt main()
//{




	//int i = 0;
	//while (i < 5)
	//{
	//	test();
	//	i++;
	//}


	//int max=(a>b?a:b);
	
	
	/*int a = 1;
	int b = 1;
	int c = a && b;
	int d = a || b;
	printf("%d\n", d);
	printf("%d\n ", c);*/

	/*int a = (int)3.14;
	printf("%d\n", a);*/

	
	/*int a = 10;
	int b = ++a;
	printf("a=%d,b=%d\n", a, b);*/

	/*int a = 0;
	int b = ~a;
	printf("%d\n", b);*/

	//int a = 10;
	//int arr[] = { 1,2,3,4,5,6 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));



//int Max(int x, int y) 
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max=%d\n", max);



	/*int num1 = 10;
	int num2 = 20;
	if (num1 > num2)
		printf("较大值是：%d\n", num1);
	else
		printf("较大值是：%d\n",num2);*/

	//return 0;
//}//
