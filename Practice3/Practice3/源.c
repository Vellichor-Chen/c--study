#define  _CRT_SECURE_NO_WARNINGS 1
//2011
// 
//#include<stdio.h>
//#include<math.h>
//int isprime(int n)
//{
//	for (int j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int x, y;
//	while (~scanf("%d%d", &x, &y))
//	{
//		int flag = 0;
//		if (x == 0 && y == 0)
//		{
//			break;
//		}
//		for (int i = x;i <= y;i++)
//		{
//			int n = 0;
//			n = i * i + i + 41;
//			int flag = 0;
//			if (isprime(n)==0)
//			{
//				flag++;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("OK\n");
//		}
//		else
//		{
//			printf("Sorry\n");
//		}
//	}
//	return 0;
//}
//
//





//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int x, y;
//	while (~scanf("%d%d", &x, &y))
//	{
//		int flag = 0;
//		if (x == 0 && y == 0)
//		{
//			break;
//		}
//		for (int i = x;i <= y;i++)
//		{
//			int n = 0;
//			n = i * i + i + 41;
////			flag = 0;
//			for (int j = 2;j <= sqrt(n);j++)
//			{
//				if (n % j == 0)
//				{
//					flag = 1;
//					break;
//				}
//			}
//		}
//		if (flag == 0)
//		{
//			printf("OK\n");
//		}
//		else
//		{
//			printf("Sorry\n");
//		}
//	}
//	return 0;
//}





////m到达150为定值
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	int n = 0;
//
//	for (i = 1;i <= m;i++)
//	{
//		scanf("%d", &n);
//		if (n > 150)
//		{
//			n = 150;
//		}
//		double sum = 0;
//		int flag = 1;
//		for (int j = 1;j <= n;j++)
//		{
//			sum += flag * (1.0 / j);
//			flag = -flag;
//		}
//		printf("%.2lf\n", sum);
//	}
//	return 0;
//}
////int main()
////{
////	int i, j, n, m, sign = 1;
////	double sum;
////	scanf("%d", &n);
////	for (i = 1; i <= n; i++)
////	{
////		scanf("%d", &m);
////		if (m > 150) m = 150;
////		sum = 0; sign = 1;
////		for (j = 1; j <= m; j++)
////		{
////			sum += sign * (1.0 / j);
////			sign = -sign;
////		}
////		printf("%.2lf\n", sum);
////	}
////}




//2013

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int x = 1;
//		for (i = 0;i < n-1;i++)
//		{
//			x = (x + 1) * 2;
//		}
//		printf("%d\n", x);
//	}
//	return 0;
//}



//2014
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100];
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d ", &arr[i]);
//		}
//		double sum = 0.0;
//		for (i = 0;i < n-1;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n - i - 1;j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//		for (i = 1;i < n - 1;i++)
//		{
//			sum += arr[i];
//		}
//		printf("%.2lf\n", sum / (n - 2));
//	}
//	return 0;
//}



//2015
//#include<stdio.h>
//
//
//#include<stdio.h>
//int main(void)
//{
//	int i, n, m, b, c;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		b = 2;
//		c = 0;
//		for (i = 0; i < n / m; i++)
//		{
//			printf(c++ ? " %d" : "%d", b + m - 1);//输出改组的平均数
//			b += m * 2;//计算下一组数的第一个数
//		}
//		printf(n % m ? " %d\n" : "\n", b + n % m - 1);//最后不足m个，则以实际数量求平均值
//	}
//	return 0;
//}


//2016
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100];
//	int num;
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		num = arr[0];
//		int x = 0;
//		for (i = 0;i < n;i++)
//		{
//			if (arr[i]<num)
//			{
//				num = arr[i];
//				x = i;
//			}
//		}
//		int tmp = arr[0];
//		arr[0] = arr[x];
//		arr[x] = tmp;
//		printf("%d", arr[0]);
//		for (i = 1;i < n;i++)
//		{
//			printf(" %d", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2017
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	char s[] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		while (n--)
//		{
//			int count = 0;
//			getchar();
//			scanf("%s", s);
//			for (i = 0;s[i]!='\0';i++)
//			{
//				if (s[i] >= '0' && s[i] <= '9')
//				{
//					count++;
//				}
//			}
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}
//



#include<stdio.h>
#include<string.h>
int main()
{
	int n = 0;
	int i = 0;
	char s[1111] = { 0 };
	while (~scanf("%d", &n))
	{
		
		for (i = 0;i < n;i++)
		{
			int count = 0;
			scanf("%s", s);
			for (int j = 0;j < strlen(s);j++)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					count++;
				}
		
			}	
			printf("%d\n", count);
		}
	
	}
	return 0;
}





#include<stdio.h>
#include<string.h>
int main()
{
	int n = 0;
	int i = 0;
	int c = 0;
	char s[1111];
	while (~scanf("%d", &n))
	{
		while (n--)
		{
			getchar();
			scanf("%s", s);
			c = 0;
			for (i = 0;s[i] != '\0';i++)
			{
				if (s[i] >= '0' && s[i] <= '9')
				{
					c++;
				}
			}
			printf("%d\n", c);
		}

	}
	return 0;
}