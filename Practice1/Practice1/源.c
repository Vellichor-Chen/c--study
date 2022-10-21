#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	char tmp = 0;
//	while (~scanf("%c%c%c", &a, &b, &c))
//	{
//		getchar();
//		if (a > b)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		if (a > c)
//		{
//			tmp = a;
//			a = c;
//			c = tmp;
//		}
//		if (b > c)
//		{
//			tmp = b;
//			b = c;
//			c = tmp;
//		}
//		printf("%c %c %c\n", a, b, c);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double x1, y1, x2, y2;
//	double len1, len2;
//	double length = 0;
//	while (~scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2))
//	{
//		if (x1 > x2)
//		{ 
//			len1 = (double)x1 - x2;
//		}
//		else 
//		{
//			len1 = (double)x2 - x1;
//		}
//		if (y1 > y2)
//		{
//			len2 = (double)y1 - y2;
//		}
//		else
//		{
//			len2 = (double)y2 - y1;
//		}
//		length = sqrt(len1 * len1 + len2 * len2);
//		printf("%.2lf", length);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, d;
//	double e, f;
//	while (scanf("%lf%lf%lf%lf", &a, &b, &c, &d) != EOF)
//	{
//		e = a > c ? a - c : c - a;
//		f = b > d ? b - d : d - b;
//		printf("%.2lf\n", sqrt(e * e + f * f));
//	}
//}


#include<stdio.h>
#include<math.h>
//#define PI 3.1415927
//int main()
//{
//	double r = 0.0;
//	while (~scanf("%lf", &r))
//	{
//		printf("%.3lf\n", 4 * PI * r * r * r/3);
//	}
//	return 0;
//}



#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	double i = 0;
//	while (~scanf("%lf", &i))
//	{
//		if (i >= 0)
//		{
//			printf("%.2lf\n", i);
//		}
//		else
//		{
//			printf("%.2lf\n", fabs(i));
//		}
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int i = 0;
//	while (~scanf("%d/%d/%d", &y, &m, &d))
//	{
//		int sum = 0;
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{		
//			//ÈòÄê
//			if (m == 1)
//			{
//				sum = d;
//			}
//			else
//			{
//				for (i = 0;i < m - 1;i++)
//				{
//					sum += days[i];
//				}
//				if (m == 2)
//				{
//					sum += d;
//				}
//				else if (m > 2)
//				{
//					sum += d + 1;
//				}
//			}
//		}
//		else
//		{
//			//Æ½Äê
//			if (m == 1)
//			{
//				sum = d;
//			}
//			else
//			{
//				for (i = 0;i < m - 1;i++)
//				{
//					sum += days[i];
//				}
//				sum += d;
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int s = 0;
	while (~scanf("%d", &s))
	{
		if (s <= 100 && s >= 90)
		{
			printf("A\n");
		}
		else if (s <= 89 && s >= 80)
		{
			printf("B\n");
		}
		else if (s <= 79 && s >= 70)
		{
			printf("C\n");
		}
		else if (s <= 69 && s >= 60)
		{
			prinf("D\n");
		}
		else if (s <= 59 && s >= 0)
		{
			printf("E\n");
		}
		else
		{
			printf("Score is error!\n");
		}
	}
	return 0;
}