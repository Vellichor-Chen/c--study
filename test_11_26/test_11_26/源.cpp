#define  _CRT_SECURE_NO_WARNINGS 1
//hdu2072
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<set>
//using namespace std;
//int main()
//{
//	char s[1000];
//	set<string> st;
//	string ss;
//	while (gets_s(s) && strcmp(s, "#") != 0)
//	{
//		int len = strlen(s);
//		s[len] = ' ';
//		ss = "";
//		for (int i = 0;i <= len;i++)
//		{
//			if (s[i] != ' ')
//				ss += s[i];
//			else
//			{
//				if (ss.length())
//					st.insert(ss);
//				ss = "";
//			}
//		}
//		cout << st.size() << endl;
//		st.clear();
//	}
//	return 0;
//}



//2073
//#include<iostream>
//#include<cmath>
//using namespace std;
//int N;
//const int M = 105;
//double g[M][M];
//void init()
//{
//	g[0][0] = 0.0;
//	for (int i = 1;i <= 101;i++)
//	{
//		g[0][i] = g[i - 1][0] + sqrt(i * i + (i - 1) * (i - 1));
//		g[i][0] = g[0][i] + sqrt(i * i + i * i);
//	}
//	for (int i = 1;i <= 101;i++)
//		for (int j = 1;j <= 101;j++)
//			g[i][j] = g[i - 1][j + 1] + sqrt(2.0);
//}
//int main()
//{
//	cin >> N;
//	init();
//	while (N--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		double res = fabs(g[x1][y1] - g[x2][y2]);
//		printf("%.3lf\n", res);
//	}
//}





//2074
//#include<iostream>
//using namespace std;
//char S[80][80];
//int main()
//{
//	int n;
//	char a, b;
//	while (cin >> n >> a >> b)
//	{
//		int mid = n / 2;
//		bool flag = true;
//		S[mid][mid] = a;
//		for (int i = 1;i <= mid;i++)
//		{
//			if (flag)
//			{
//				for (int j = 0;j < 2 * i + 1;j++)
//				{
//					S[mid - i][mid - i + j] = b;
//					S[mid + i][mid - i + j] = b;
//					S[mid - i + j][mid - i] = b;
//					S[mid - i + j][mid + i] = b;
//					flag = false;
//				}
//			}
//			else
//			{
//				for (int j = 0;j < 2 * i + 1;j++)
//				{
//					S[mid - i][mid - i + j] = a;
//					S[mid + i][mid - i + j] = a;
//					S[mid - i + j][mid - i] = a;
//					S[mid - i + j][mid + i] = a;
//					flag = true;
//				}
//			}
//		}
//		S[0][0] = S[0][n - 1] = S[n - 1][0] = S[n - 1][n - 1] = ' ';
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < n;j++)
//				cout << S[i][j];
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, t = 0;
//	char a[85][85], b, c;
//	while (cin >> n >> b >> c)
//	{
//		if (t++)
//			cout << endl;
//		if (n / 2 % 2 == 0)
//			swap(b, c);
//		for(int k=0;k<n;k++)
//			for(int i=k;i<n-k;i++)
//				for (int j = k;j < n - k;j++)
//				{
//					if (k % 2)
//						a[i][j] = b;
//					else
//						a[i][j] = c;
//				}
//		if (n != 1)
//			a[0][n - 1] = a[n - 1][0] = a[0][0] = a[n - 1][n - 1] = ' ';
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < n;j++)
//				cout << a[i][j];
//			cout << endl;
//		}
//	}
//	return 0;
//}



//2075
//#include<iostream>
//using namespace std;
//int t;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (a % b == 0) puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}





//2076
//#include<iostream>
//using namespace std;
//int t;
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		double h, m, s;
//		cin >> h >> m >> s;
//		double M = 0.0, H = 0.0;
//		if (h > 12) h -= 12;
//		M = m * 6 + s / 10;
//		double sum = h * 30 + M / 12 - M;
//		if (sum < 0)
//			sum = -sum;
//		if (sum > 180)
//			sum = 360 - sum;
//		cout << int(sum) << endl;
//	}
//}




//2077
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main()
//{
//	ll f[22];
//	f[0] = 0, f[1] = 2;
//	for (int i = 2;i <= 20;i++)
//		f[i] = f[i - 1] * 3 + 2;
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int x;
//		cin >> x;
//		cout << f[x - 1]+ 2 << endl;
//	}
//	return 0;
//}





//hdu2078
//#include<iostream>
//using namespace std;
//int T;
//const int N = 50;
//int f[N];
//int main()
//{
//	cin >> T;
//	while (T--)
//	{
//		int n, m, min = 100;
//		cin >> n >> m;
//		for (int i = 0;i < n;i++)
//		{
//			cin >> f[i];
//			if (min > f[i]) min = f[i];
//		}
//		cout << (100 - min) * (100 - min) << endl;
//	}
//}





//2079
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1010;
//int e[1010], c1[1010], c2[1010];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		memset(e, 0, sizeof e);
//		int n, k;
//		cin >> n >> k;
//		for (int i = 0;i < k;i++)
//		{
//			int a, b;
//			cin >> a >> b;
//			e[a] = b;
//		}
//		memset(c1, 0, sizeof c1);
//		memset(c2, 0, sizeof c2);
//		for (int i = 0;i <= e[i];i++)
//			c1[i] = 1;
//		for (int i = 2;i <= 40;i++)
//		{
//			for (int j = 0;j <= 40;j++)
//			{
//				for (k = 0;k <= e[i] && k * i + j <= 40;k++)
//				{
//					c2[k * i + j] += c1[j];
//				}
//			}
//			for (int j = 0;j <= 40;j++)
//			{
//				c1[j] = c2[j];
//				c2[j] = 0;
//			}
//		}
//		cout << c1[n] << endl;
//	}
//}




