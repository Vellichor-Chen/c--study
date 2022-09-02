
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
int main() 
{
	int a = 1;
	int b = a << 1;
	printf("%d\n", b);
	 
	/*int a = 5 % 2;
	printf("%d\n", a);*/


	/*int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}*/
	
	//printf("%d\n", arr[4]);
	//arr[下标]
	//char ch[20];
	//float arr2[5];
	/*int sum = 0;
	int a = 1;
	int b = 1;
	sum = Add(a, b);
	printf("sum=%d\n", sum);
   */
	/*int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("好offer\n");*/
	/*int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（1/0）>:");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("失业\n");*/
	//printf("%d\n",strlen("c:\test\32\test.c"));
	//printf("%c\n",'\132');
	//printf("%c\n",'\x61');

	//printf("%c\n",'\'');
	//printf("%s\n","\"");

	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n",strlen(arr1));
	printf("%d\n", strlen(arr2));*/

	//A-65
	//a-97
	//ASCII编码
	/*char arr1[] = "abc";  
	char arr2[] = { 'a','b','c' ,'\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////#define MAX 10
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n",SECRET);//2

	/*int arr[MAX] = { 10 };
	printf("%d\n", MAX);*/

	//int n = 10;//n是常变量
	////int arr[n] = { 10 };

	/*const int num = 4;
	printf("%d\n",num);
	num = 8;
	printf("%d\n",num);*/
	return 0;
}
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);

//	return 0;
//}