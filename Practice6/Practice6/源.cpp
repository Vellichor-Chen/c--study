#define  _CRT_SECURE_NO_WARNINGS 1
//2030
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1000];
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n--)
//	{
//		int count = 0;
//		gets_s(str);
//		int len = strlen(str);
//		for (int i = 0;i <=len;i++)
//		{
//			if (str[i] < 0)
//			{
//				count++;
//			}
//			}
//		printf("%d\n", count / 2);
//	}
//	return 0;
//}


//2031
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[100];
//	int N, m;
//	while (~scanf("%d%d", &N, &m))
//	{
//		if (N < 0)
//		{
//			printf("-");
//			N = -N;
//		}
//		int x = 0;
//		while (N > 0)
//		{
//			x++;
//			arr[x] = N % m;
//			N /= m;
//		}
//		for (int i = x;i > 0;i--)
//		{
//			if (arr[i] >= 10)
//			{
//				printf("%c", (char)arr[i] + 55);
//			}
//			else
//			{
//				printf("%d", arr[i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int N, R;
//	char ch[100];
//	while (cin >> N >> R)
//	{
//		if (N < 0)
//		{
//			cout << '-';
//			N = -N;
//		}
//		_itoa_s(N, ch, R);
//		for (int i = 0;i < strlen(ch);i++)
//		{
//			ch[i] = toupper(ch[i]);
//		}
//		cout << ch << endl;
//	}
//	return 0;
//}

//2032
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100][100] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)//行
//		{
//			arr[i][i] = 1;
//			arr[i][0] = 1;
//		}
//		for (int i = 2;i < n;i++)      //已知每个数等于它上方两数的之和 
//		{
//			for (int j = 1;j < i;j++)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		for (i = 0;i < n;i++)
//		{
//			for (int j = 0;j <= i;j++)
//			{
//				if (j == 0)
//				{
//					printf("%d", arr[i][j]);
//				}
//				else
//				printf(" %d", arr[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2033
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		while (n--)
//		{
//			int i = 0;
//			for (i = 0;i < 6;i++)
//			{
//				scanf("%d", &arr[i]);
//			}
//			int h = 0, m = 0,s = 0;
//			s += (arr[2] + arr[5]) % 60;
//			if (arr[2] + arr[5] > 59)
//			{
//				m += 1;
//			}
//			m += (arr[1] + arr[4]) % 60;
//			if (arr[1] + arr[4] > 59)
//			{
//				h += 1;
//			}
//			h += arr[0] + arr[3];
//			printf("%d %d %d\n", h, m, s);
//		}
//	}
//	return 0;
//}


//2034
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	int a[101] = { 0 };
//	int b[101] = { 0 };
//	while (~scanf("%d%d", &n, &m),n||m)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (i = 0;i < m;i++)
//		{
//			scanf("%d", &b[i]);
//		}
//		for (i = 0;i < n - 1;i++)
//		{
//			for (int j = 0;j < n - 1 - i;j++)
//			{
//				if (a[j] > a[j + 1])
//				{
//					int tmp = a[j];
//					a[j] = a[j + 1];
//					a[j + 1] = tmp;
//				}
//			}
//		}
//		int k = 0;
//		int N = n, M = m;
//		for (i = 0;i < n;i++)
//		{
//			int flag = 1;
//			for (int j = 0;j < m;j++)
//			{
//				if (a[i] == b[j])
//				{
//					N--;
//					flag = -1;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				a[k++] = a[i];
//			}
//		}
//		if (N == 0)
//		{
//			printf("NULL\n");
//		}
//		else
//		{
//			for (i = 0;i < k;i++)
//			{
//				printf("%d ", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//2035 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a, b;
//	while (~scanf("%d%d", &a, &b))
//	{
//		int x = a;
//		if (a == 0 && b == 0)
//		{
//			return 0;
//		}
//		for(int i=1;i<b;i++)
//		{
//			a = a * x % 1000;
//		}
//		printf("%d\n", a);
//	}
//	return 0;
//}

//2036
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char a, b, c, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0;
//	cin >> a >> b >> c;
//	cin >> d >> e >> f;
//	cin >> g >> h >> i;
//	getchar();
//	if (a > b)
//	{
//		swap(a, b);
//	}
//	if (a > c)
//	{
//		swap(a, c);
//	}
//	if (b > c)
//	{
//		swap(b, c);
//	}
//	cout << a << " " << b << " " << c << endl;
//
//	if (d > e)
//	{
//		swap(d, e);
//	}
//	if (d > f)
//	{
//		swap(d, f);
//	}
//	if (e > f)
//	{
//		swap(e, f);
//	}
//	cout << d << " " << e << " " << f << endl;
//
//	if (g > h)
//	{
//		swap(g, h);
//	}
//	if (g > i)
//	{
//		swap(g, i);
//	}
//	if (h > i)
//	{
//		swap(h, i);
//	}
//	cout << g << " " << h << " " << i;
//
//	return 0;
//
//}

//2036
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int x[1000];
//	int y[1000];
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		getchar();
//		int i = 0;
//		for (i = 1;i <= n;i++)
//		{
//			scanf("%d%d", &x[i], &y[i]);
//		}
//		int t = 0;
//		for (i = 2;i <=n;i++)
//		{
//			t += x[i - 1] * y[i] - x[i] * y[i - 1];
//		}
//		t += x[n] * y[1] - x[1] * y[n];
//		printf("%.1lf\n", abs(t) / 2.0);
//	}
//	return 0;
//}


//2037
//#include<stdio.h>
//struct time
//{
//	int t1;
//	int t2;
//};
//int main()
//{
//	struct time a[111] = {0}, tmp;
//	int n, i, k, cnt;
//	while (~scanf("%d", &n))
//	{
//		if (n == 0)
//		{
//			return 0;
//		}
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d%d", &a[i].t1, &a[i].t2);
//		}
//		for (i = 0;i < n - 1;i++)
//		{
//			for (k = 0;k < n - 1 ;k++)
//			{
//				if (a[k].t2 > a[k + 1].t2)
//				{
//					tmp = a[k];
//					a[k] = a[k + 1];
//					a[k + 1] = tmp;
//				}
//				if (a[k].t2 == a[k + 1].t2)
//				{
//					if (a[k].t1 < a[k + 1].t1)
//					{
//						tmp = a[k];
//						a[k] = a[k + 1];
//						a[k + 1] = tmp;
//					}
//				}
//				
//			}
//		}
//		cnt = 1;
//		int t = a[0].t2;
//		for (i = 1;i < n ;i++)
//		{
//			if (a[i].t1 >= t)
//			{
//				cnt++;
//
//				t = a[i].t2;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}


//12
//1 3
//3 4
//0 7
//3 8
//15 19
//15 20
//10 15
//8 18
//6 12
//5 10
//4 14
//2 9
//

//2039
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//	int n;
//	int arr[10];
//	while (~scanf("%d", &n))
//	{
//		while (n--)
//		{
//			for (int i = 0;i < 3;i++)
//			{
//				scanf("%d", &arr[i]);
//			}
//			if (arr[0] + arr[1] > arr[2] && arr[1] + arr[2] > arr[0] && arr[0] + arr[2] > arr[1] &&
//				abs(arr[0] - arr[1]) < arr[2] && abs(arr[1] - arr[2]) < arr[0] && abs(arr[0] - arr[2]) < arr[1])
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	double arr[10];//正数可以是int，也可以是double
//	cin >> n;
//	while (n--)
//	{
//		for (int i = 0;i < 3;i++)
//		{
//			cin >> arr[i];
//		}
//		sort(arr, arr + 3);
//		if (arr[0] + arr[1] > arr[2])
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
//


//2040
//#include<stdio.h>
//int Positivedivisor(int x)//遍历
//{
//	int i, count;
//	count = 0;
//	for (i = 1;i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			count += i;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m;
//	int a, b, s,t;
//	scanf("%d", &m);
//	while (m--)
//	{
//		scanf("%d%d", &a, &b);
//		s = Positivedivisor(a);
//		t = Positivedivisor(b);
//		if (t == a && s == b)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//
//	return 0;
//}

//2041
//方法：递归
//#include<stdio.h>
//int count(int n)
//{
//	if (n == 1)return 1;
//	if (n == 2)return 1;
//	else
//	{
//		return count(n - 1) + count(n - 2);
//	}
//}
//int main()
//{
//	int m,n;
//	scanf("%d", &m);
//	while (m--)
//	{
//		scanf("%d", &n);
//		int ret = count(n);
//		printf("%d", ret);
//	}
//	return 0;
//}
//!!!!!!!Time Limit Exceeded

//?不让递归？

//#include<stdio.h>
//int main()
//{
//	int m, n, arr[100];
//	scanf("%d", &m);
//	arr[0] = 0;
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3;i <= 40;i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	while (m--)
//	{
//		scanf("%d", &n);
//		printf("%d\n", arr[n - 1]);
//	}
//	return 0;
//}
//















































































































































































































































































































































































