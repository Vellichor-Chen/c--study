#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;
//struct stu s3;
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//}*psa;
//int main()
//{
//	
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//


//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//typedef struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//}Node;
//int main()
//{
//	sizeof(struct Node);
//	struct Node n1;
//	Node n2;
//	return 0;
//}
//
//struct T
//{
//	double weight;
//	short age;
//};
//struct s
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	const char arr[20];
//};
//int main()
//{
//	//struct s S = { 'c',100,3.14,"hello bit"};
//	struct s S = { 'c',{55.6,30},100,3.14,"hllo bit" };
//	printf("%c %d %lf %s\n", S.c, S.a, S.d, S.arr);
//	printf("%lf\n", S.st.weight);
//	return 0;
//}
//#pragma pack(4)
//struct S
//{
//	char c;
//	double d;
//};
////#pragma pack()
//#include<stddef.h>
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	printf("%d\n", offsetof(struct S,c));
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	/*tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;*/
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	s.a = 100;
//	s.a = 'w';
//	s.d = 3.14;
//	return 0;
//}
//
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//
//

//enum Day
//{
//	Mon,Tues,Wed,Thur,Fri,Sat,Sun
//};
//
//enum Sex
//{
//	male=2,
//	famale=4,
//	secret=8
//};
//
//enum color
//{
//	red,
//	green,
//	blue
//};
//int main()
//{
//	enum Sex s = male;
//	//s = famale;
//	enum color c = blue;
//	//male=0;error
//	enum color c = 2;//error
//	printf("%d%d%d\n", red, green, blue);
//	printf("%d%d%d\n", male, famale, secret);
//	return 0;
//}
//


//#define red 0
//#define green 1;
//#define blue 2


//union Un
//{
//	char c;
//	int i;
//
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	printf("%p\n", &(u.c));//000000EF097CFCB4
//	printf("%p\n", &(u.c));//000000EF097CFCB4
//	printf("%p\n", &u);//000000EF097CFCB4
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//return *(char*)&a;
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c; 
//}
//int main()
//{
//	//int a = 0x11223344;
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
union un
{
	int a;
	char arr[5];
};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));
	return 0;
}