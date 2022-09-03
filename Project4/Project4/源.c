#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "c语言程序设计",55 };
	strcpy(b1.name, "c++");
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 1;
	printf("修改后的价格：%d\n", b1.price);*/

	//double d = 3.14;
	//double* pd = &d;
	//printf("%d\n", sizeof(pd));
	//*pd = 5.5;
	//printf("%lf\n", d);

	//int a = 10;
	//int* p = &a;
	////printf("%p\n", p);
	//*p = 20;
	//printf("a = %d\n", a);

	////int a = 10;
	////printf("%p\n", &a);
	return 0;
}