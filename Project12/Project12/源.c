#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求一个数二进制中1的个数
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
			num = num / 2;
		}
	}
	printf("%d\n", count);,
	return 0;
}