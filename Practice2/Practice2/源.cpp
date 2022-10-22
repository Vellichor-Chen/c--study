#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100];
//	while (~scanf("%d", &n))
//	{
//		int sum = 1;
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d ", &arr[i]);
//		}
//		for (i = 0;i < n;i++)
//		{
//			if (arr[i] % 2 == 1)
//			{
//				sum *= arr[i];
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m, n;
//	while (~scanf("%d%d",&m,&n))
//	{
//		int i = 0;
//		int sum1 = 0;
//		int sum2 = 0;
//		if (m > n)
//		{
//			int tmp = 0;
//			tmp = m;
//			m = n;
//			n = tmp;
//		}
//		for (i = m;i <= n;i++)
//		{
//			if (i % 2 == 0)
//			{
//				sum2 += i*i;
//			}
//			else
//			{
//				sum1 += i*i*i;
//			}
//		}
//		printf("%d %d\n", sum2, sum1);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double x;
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		int a = 0;
//		int b = 0;
//		int c = 0;//a为负，b为0，c为正
//		while (n--)
//		{
//			scanf("%lf", &x);
//			if (x < 0)
//			{
//				a++;
//			}
//			else if (x == 0)
//			{
//				b++;
//			}
//			else
//			{
//				c++;
//			}
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (~scanf("%d%d", &n, &m))
//	{
//		double ret = 0.0;
//		ret += n;
//		while (--m)
//		{
//			ret += sqrt(n);
//			n = sqrt(n);
//		}
//		printf("%.2lf\n", ret);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	while (~scanf("%d%d", &m, &n))
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int count = 0;
		int i = 0;
		for (i = m;i <= n;i++)
		{
			a = i / 100;
			b = i % 100 / 10;
			c = i % 100 % 10;
			if (a * a * a + b * b * b + c * c * c == i)
			{
				printf("%d ", i);
				count++;
			}
		}
		if (count == 0)
		{
			printf("no");
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int m = 0;
	int n = 0;
	while (~scanf("%d %d", &m, &n))
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int count = 1;
		int i = 0;
		for (i = m;i <= n;i++)
		{
			a = i / 100;
			b = i % 100 / 10;
			c = i % 100 % 10;
			if (a * a * a + b * b * b + c * c * c == i && count == 1)
			{
				printf("%d", i);
				count = 0;
			}
			else if (a * a * a + b * b * b + c * c * c == i)
			{
				printf(" %d", i);
			}
		}
		if (count == 1)
		{
			printf("no");
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int m = 0;
	int n = 0;
	while (~scanf("%d %d", &m, &n))
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int count = 1;
		int i = 0;
		if (m <= n)
		{
			for (i = m;i <= n;i++)
			{
				a = i / 100;
				b = i % 100 / 10;
				c = i % 100 % 10;
				if (a * a * a + b * b * b + c * c * c == i)
				{
					printf("%d ", i);
					count = 0;
				}
			}
		}
		else
		{
			for (i = n;i <= m;i++)
			{
				a = i / 100;
				b = i % 100 / 10;
				c = i % 100 % 10;
				if (a * a * a + b * b * b + c * c * c == i)
				{
					printf("%d ", i);
					count = 0;
				}
			}
		}
		if (count == 1)
		{
			printf("no");
		}
		printf("\n");
	}
	return 0;
}











//#include <iostream>
//#include <cstdio>
//
//
//int main()
//{
//	int i, a, b, c;
//	int x, y;
//	int flag;
//
//	while (scanf("%d %d", &x, &y) != EOF)
//	{
//		flag = 1;
//		for (i = x; i <= y; i++)
//		{
//			a = i / 100;
//			b = i / 10 % 10;
//			c = i % 10;
//
//			if ((a * a * a + b * b * b + c * c * c == i) && flag == 1)
//			{
//				flag = 0;
//				printf("%d", i);
//			}
//			else if (a * a * a + b * b * b + c * c * c == i)
//			{
//				printf(" %d", i);
//			}
//		}
//		if (1 == flag)
//		{
//			printf("no");
//		}
//		printf("\n");
//	}
//	return 0;
//}