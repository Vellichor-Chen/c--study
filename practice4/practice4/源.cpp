#define  _CRT_SECURE_NO_WARNINGS 1
//2042
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	while (n--)
//	{
//		m = 0;
//		scanf("%d", m);
//		int ret = 3;
//		for (int i = 0;i < m;i++)
//		{
//			ret += (ret - 1) * 2;
//		}
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//2043
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//	int n;
//	char s[100];
//	while (~scanf("%d", &n) && n)
//	{
//		getchar();
//		while (n--)
//		{
//			gets_s(s);
//			int len = strlen(s);
//			int cnt = 0;
//			if (len > 16 || len < 8)
//			{
//				printf("NO\n");
//			}
//			else
//			{
//				for (int i = 0;i < len;i++)
//				{
//					if (isdigit(s[i]) || !isalpha(s[i]) || s[i] == '~' || s[i] == '!' || s[i] == '@' ||
//						s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^')
//					{
//						cnt++;
//					}
//				}
//				if (cnt == len-1)
//				{
//					printf("YES\n");
//				}
//				else
//				{
//					printf("NO\n");
//				}
//			}
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n--)
//	{
//		int k1 = 0, k2 = 0, k3 = 0, k4 = 0, l = 0, i = 0;
//		char str[1001], c;
//		gets_s(str);
//		l = strlen(str);
//		if (l <= 16 && l >= 8)
//		{
//			for (i = 0;i < l;i++)
//			{
//				c = str[i];
//				if (c <= 'Z' && c >= 'A')
//				{
//					k1 = 1;
//				}
//				else if/* (c <= 'z' && c >= 'a')
//				{*/
//					k2 = 1;
//				}
//				else if (c <= '9' && c >= '0')
//				{
//					k3 = 1;
//				}
//				else
//				{
//					k4 = 1;
//				}
//			}
//			if (k4 + k1 + k3 + k2 >= 3)
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}


//2044
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long arr[100] = {0};
//	int a, b;
//	while (n--)
//	{
//		scanf("%d%d", &a, &b);
//		arr[2] = 1;
//		arr[3] = 2;
//		for (int i = 4;i <= 55;i++)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//		printf("%lld\n", arr[b - a + 1]);
//	}
//	return 0;
//}
//递归求解



//2045
//#include<stdio.h>
//int main()
//{
//	int n;
//	long long arr[55] = { 0 };
//	while(~scanf("%d",&n)&&n)
//	{
//		arr[1] = 3;
//		arr[2] = 6;
//		arr[3] = 6;
//		for (int i = 4;i < 55;i++)
//		{
//			arr[i] = arr[i - 1] + 2*arr[i - 2];
//		}
//		printf("%lld\n", arr[n]);
//	}
//	return 0;
//
//}


//2046
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	long long arr[52];
//	while (~scanf("%d", &n) && n)
//	{
//		arr[1] = 1;
//		arr[2] = 2;
//		for (int i = 3;i < 52;i++)
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//		}
//		printf("%lld\n", arr[n]);
//	}
//	return 0;
//}


//2047
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	long long arr[53] = { 0 };
//	while (~scanf("%d", &n) && n)
//	{
//		arr[1] = 3;
//		arr[2] = 8;
//		for (int i = 3;i < 53;i++)
//		{
//			arr[i] = 2 * arr[i - 1] + 2 * arr[i - 2];
//		}
//		printf("%lld\n", arr[n]);
//	}
//	return 0;
//}




//2048
//#include<stdio.h>
//int main()
//{
//	int n = 0,m = 0;
//	double f[22] = { 0 };
//	f[1] = 0;
//	f[2] = 1;
//	f[3] = 2;
//	for (int i = 4;i <= 20;i++)
//	{
//		f[i] = (i-1) * (f[i - 1] + f[i - 2]);
//	}
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &m);
//		double sum = 1.0;
//		for (int i = 1;i <= m;i++)
//		{
//			sum *= i;
//		}
//		printf("%.2lf%%\n", f[m] / (sum * 1.0) * 100);
//	}
//	return 0;
//}



//2049
//#include<stdio.h>
//long long f[25], b[25];
//void init()
//{
//	f[0] = 1;
//	for (int i = 1;i <= 20;i++)//阶乘
//	{
//		f[i] = f[i - 1] * i;
//	}
//	b[0] = b[1] = 0;
//	b[2] = 1;
//	for (int i = 3;i <= 20;i++)
//	{
//		b[i] = (i - 1)*(b[i - 1] + b[i - 2]);
//	}
//}
//int main()
//{
//	int n,N,M;
//	scanf("%d", &n);
//	init();
//	while (n--)
//	{
//		scanf("%d%d", &N, &M);
//		printf("%lld\n", f[N] / f[N - M] / f[M] * b[M]);
//	}
//	return 0;
//}
//

//2050
//#include<stdio.h>
//int block(int m)
//{
//	int i, s, cnt;
//	s = 0;
//	if (m == 2)
//	{
//		s = 0;
//	}
//	for (i = 1;i <= m - 2;i++)
//	{
//		s += i;
//	}
//	cnt = s + 2 * m;
//	return cnt;
//}
//int main()
//{
//	int n, m, i;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &m);
//		printf("%d\n",block(2*m)-2*m);
//	}
//	return 0;
//}

//2051
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = {0};
//	while (~scanf("%d", &n))
//	{
//		int i=0, j;
//		while (n)
//		{
//			arr[i++] = n % 2;
//			n /= 2;
//		}
//		for (j = i - 1;j >= 0;j--)
//		{
//			printf("%d", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2052
//#include<stdio.h>
//int main()
//{
//	int n, m,i,j;
//	scanf("%d%d", &n, &m);
//	int arr[100][100];
//	arr[0][0] = '+';
//	arr[0][m + 1] = '+';
//	arr[n + 1][0] = '+';
//	arr[n + 1][m + 1] = '+';
//	for (i = 0;i < m + 2;i++)
//	{
//		if (i == 0)
//		{
//			printf("+");
//			for (j = 1;j < m + 1;j++)
//			{
//				printf("-");
//			}
//			printf("+");
//			printf("\n");
//		}
//		else if (i == n + 1)
//		{
//			printf("+");
//			for (j = 1;j < m + 1;j++)
//			{
//				printf("-");
//			}
//			printf("+\n");
//		}
//		else
//		{
//			printf("|");
//			for (j = 1;j < m + 1;j++)
//			{
//				printf(" ");
//			}
//			printf("|\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n, m, i, j;
//	int arr[100][100];
//	while (~scanf("%d%d", &n, &m))//n==width  m==height
//	{
//		memset(arr, ' ', 100 * 100 * sizeof(char));
//		arr[0][0] = '+';
//		arr[0][n + 1] = '+';
//		arr[m + 1][0] = '+';
//		arr[m + 1][n + 1] = '+';
//		for (i = 1;i < m + 1;i++)
//		{
//			arr[i][0] = '|';
//			arr[i][n + 1] = '|';
//		}
//		for (j = 1;j < n + 1;j++)
//		{
//			arr[0][j] = '-';
//			arr[m + 1][j] = '-';
//		}
//		for (i = 0;i < m + 2;i++)
//		{
//			for (j = 0;j < n + 2;j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main(void) {
//	int i, j, w, h;
//	char ch[100][100];
//
//	while (scanf("%d %d", &w, &h) != EOF) {
//
//		memset(ch, ' ', 100 * 100 * sizeof(char));
//		ch[0][0] = '+';
//		ch[0][w + 1] = '+';
//		ch[h + 1][0] = '+';
//		ch[h + 1][w + 1] = '+';
//
//		for (i = 1; i <= w; i++) {
//			ch[0][i] = '-';
//			ch[h + 1][i] = '-';
//		}
//
//		for (j = 1; j <= h; j++) {
//			ch[j][0] = '|';
//			ch[j][w + 1] = '|';
//		}
//		for (i = 0; i < h + 2; i++) {
//			for (j = 0; j < w + 2; j++)
//				printf("%c", ch[i][j]);
//			putchar('\n');
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}


//2053
//#include<stdio.h>
//#include<math.h>
////int main()
////{
////	int n;
////	while (~scanf("%d", &n))
////	{
////		int k = (int)(sqrt(n) + 0.5);
////		k* k == n ? printf("1\n") : printf("0\n");
////	}
////	return 0;
////}
//
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int sum = 0;
//		for (int i = 1;i <= n;i++)
//		{
//			if (n % i == 0)
//				sum++;
//		}
//		printf("%d\n", sum % 2);
//	}
//	return 0;
//}

////2054
//#include<stdio.h>
//#include<string.h>
//char arr[10000000], brr[10000000];
//int main()
//{
//	while (~scanf("%s%s",&arr,&brr))
//	{
//		int len_a = strlen(arr);
//		int len_b = strlen(brr);
//		int ans_a = 1;
//		int ans_b = 1;
//		if (len_a != len_b)
//		{
//			for (int i = 0;i < len_a;i++)
//			{
//				if (arr[i] == '.')
//				{
//					ans_a = 0;
//				}
//			}
//			if (ans_a)
//			{
//				arr[len_a] = '.';
//			}
//			for (int i = 0;i < len_b;i++)
//			{
//				if (brr[i] == '.')
//				{
//					ans_b = 0;
//				}
//			}
//			if (ans_b)
//			{
//				brr[len_b] = '.';
//			}
//			if (strlen(arr) < strlen(brr))
//			{
//				if (ans_a)
//				{
//					for (int i = len_a + 1;i < strlen(brr);i++)
//					{
//						arr[i] = '0';
//					}
//				}
//				else
//				{
//					for (int i = len_a;i < strlen(brr);i++)
//					{
//						arr[i] = '0';
//					}
//				}
//			}
//			else if(strlen(arr)>strlen(brr))
//			{
//				if (ans_b)
//				{
//					for (int i = len_b + 1;i < strlen(arr);i++)
//					{
//						brr[i] = '0';
//					}
//				}
//				else
//				{
//					for (int i = len_b;i < strlen(arr);i++)
//					{
//						brr[i] = '0';
//					}
//				}
//			}
//		}
//		if (strcmp(arr, brr) == 0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}


//2055
//#include<stdio.h>
//int f(char c)
//{
//	if (c >= 'A' && c <= 'Z')
//	{
//		return c - 64;
//	}
//	else if (c >= 'a' && c <= 'z')
//	{
//		return 96 - c;
//	}
//	else return 0;
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		getchar();
//		while (n--)
//		{
//			char x;
//			int y;
//			scanf("%c%d", &x, &y);
//			getchar();
//			int num = f(x) + y;
//			printf("%d\n", num);
//		}
//	}
//	return 0;
//}


////2056
//#include<stdio.h>
//void Swaps(double a, double b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	while (~scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4))
//	{
//		if (x1 > x2) Swaps(x1, x2);
//		if (x3 > x4) Swaps(x3, x4);
//		if (y1 > y2) Swaps(y1, y2);
//		if (y3 > y4) Swaps(y3, y4);
//
//		double minx = x1 > x3 ? x1 : x3;
//		double maxx = x2 < x4 ? x2 : x4;
//		double miny = y1 > y3 ? y1 : y3;
//		double maxy = y2 < y4 ? y2 : y4;
//
//		if ((minx > maxx) || (miny > maxy))
//		{
//			printf("0.00\n");
//		}
//		else
//		{
//			printf("%.2lf\n", (maxx - minx) * (maxy - miny));
//		}
//
//	}
//	
//	return 0;
//}
//
//#include<stdio.h>
//double min(double x, double y)
//{
//	if (x <= y)
//		return x;
//	else
//		return y;
//}
//double max(double x, double y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	double h, l, s, t;
//	while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) != EOF)
//	{
//		if (x1 > x2)     //把两坐标按照从小到大排序
//		{
//			t = x1;
//			x1 = x2;
//			x2 = t;
//		}
//		if (y1 > y2)
//		{
//			t = y1;
//			y1 = y2;
//			y2 = t;
//		}
//		if (x3 > x4)
//		{
//			t = x3;
//			x3 = x4;
//			x4 = t;
//		}
//		if (y3 > y4)
//		{
//			t = y3;
//			y3 = y4;
//			y4 = t;
//		}
//		s = l = h = 0;
//		h = min(x2, x4) - max(x1, x3);   //求相交部分的宽
//		l = min(y2, y4) - max(y1, y3);   //求相交部分的长
//		s = l * h;
//		if (h <= 0 || l <= 0)             //判断是否相交
//			printf("0.00\n");
//		else
//			printf("%.2f\n", s);
//	}
//	return 0;
//}



//2057
//#include<stdio.h>
//int main()
//{
//	__int64 a, b;
//	while (~scanf("%I64X%I64X", &a, &b))
//	{
//		if (a + b >= 0)
//		{
//			printf("%I64X\n", a + b);
//		}
//		else
//			printf("-%I64X\n", -(a + b));
//	}
//	return 0;
//}

//2058
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N, M;
//	while (scanf("%d%d", &N, &M))
//	{
//		if (N == 0 && M == 0)
//		{
//			break;
//		}
//		int cnt = (int)sqrt(M * 2.0);
//		for (int i = cnt;i > 0;i--)
//		{
//			int tmp = M - (i - 1) * i / 2;
//			if (tmp % i == 0)
//			{
//				printf("[%d,%d]\n", tmp / i, tmp / i + i - 1);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//2059
//#include<stdio.h>
//#define INF 0x3f3f3f3f
//#define min(a,b)a<b?a:b
//int main()
//{
//	double L, C, T, VR, VT1, VT2, minute, t1;
//	int i, j, N;
//	double p[1000], a[1000];
//	while (~scanf("%lf%d%lf%lf%lf%lf%lf", &L, &N, &C, &T, &VR, &VT1, &VT2))
//	{
//		for (i = 1;i <= N;i++)
//		{
//			scanf("%lf", &a[i]);
//		}
//		a[0] = 0;
//		a[N + 1] = L;
//		for (i = 1;i <= N + 1;i++)
//		{
//			minute = INF;
//			for (j = 0;j < i;j++)
//			{
//				if (a[i] - a[j] > C)
//				{
//					t1 = C / VT1 + (a[i]-a[j]-C)/VT2;
//				}
//				else
//				{
//					t1 = (a[i] - a[j]) / VT1;
//				}
//				if (j != 0)
//				{
//					t1 += T;
//				}
//				minute = min(minute, t1 + p[j]);
//			}
//			p[i] = minute;
//		}
//		if (p[N + 1] > L / VR)
//		{
//			printf("Good job,rabbit!\n");
//		}
//		else
//		{
//			printf("What a pity rabbit!\n");
//		}
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	int dis[111];
	double bst[111];
	int L;
	while (~scanf("%d", &L))
	{
		int vr, v1, v2, n, c, t;
		scanf("%d%d%d%d%d%d", &n, &c, &t, &vr, &v1, &v2);
		bst[0] = dis[0] = 0;
		for (int i = 1;i <= n;i++)
		{
			scanf("%d", &dis[i]);
		}
		dis[n + 1] = L;
		for (int i = 1;i <= n + 1;i++)
		{
			double min = 0X3f3f3f3f;
			for (int j = 0;j < i;j++)
			{
				int len = dis[i] - dis[j];
				double tmp = len > c ? 1.0 * c / v1 + (len - c) * 1.0 / v2 : 1.0 * len / v1;
				tmp += bst[j];
				if (j)
				{
					tmp += t;
				}
				if (min > tmp)
				{
					min = tmp;
				}
			}
			bst[i] = min;
		}
		puts(1.0 * L / vr > bst[n + 1] ? "What a pity rabbit!" : "Good job,rabbit!");
	}
	return 0;
}