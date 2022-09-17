#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int count_bit_one(unsigned int n)
//{
//	/*int flag = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			flag++;
//		}
//		n /= 2;
//	}
//	return flag;*/
//	int flag = 0;
//	/*int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((n >> i) % 1 == 1)
//		{
//			flag++;
//		}
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		flag++;
//	}
//		return  flag;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	system("pause"); 
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = 0;
//	tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	for (i = 30;i >= 0;i-=2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//struct stu
//{
//	char  name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//全局
//typedef struct stu
//{
//		char  name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//}Stu;//全局
//int main()
//{
//	//struct stu s;//局部
//	Stu s1 = { "zhangsan",20,"12345678901","nan" };
//
//	return 0;
//}
//
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s S;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello\n";
//	struct t T = { "hehe",{100,'w',"hello",3.14},arr };
//	printf("%s\n", T.ch);
//	printf("%s\n", T.S.arr);
//	printf("%lf\n", T.S.d);
//	printf("%s\n", T.pc);
//	printf("%s\n", T.S.c);
//
//
//	return 0;
//}
//

//
//typedef struct stu
//{
//		char  name[20];
//		short age;
//		char tele[12];
//		char sex[5];
//}Stu;//全局
//
//void print1(Stu tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->tele);
//	printf("%s\n", ps->sex);
//
//}
//int main()
//{
//	Stu s = { "lisi",40,"11111111","nan" };
//	print1(s);
//	print2(&s);
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 0;i < 100;i++)
	{
		printf("%d ", i);
	}
	for (i = 0;i < 100;i++)
	{
		printf("%d ", 10 - i);
	}
	return 0;
}