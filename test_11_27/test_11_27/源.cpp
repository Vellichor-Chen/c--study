#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, m, sub[10], num[10], c1[41], c2[42];
//		cin >> n >> m;
//
//		for (int i = 1;i <= m;++i)
//			cin >> sub[i] >> num[i];
//
//		memset(c1, 0, sizeof c1);
//
//		for (int i = 0, t = 0;i <= n && t <= num[1];i += sub[1], t++)
//			c1[i] = 1;
//		
//		for (int i = 0; i <= m; i++)
//			c2[i] = 0;
//
//		for (int i = 2;i <= m;i++)
//		{
//			for (int j = 0;j <= n;j++)
//			{
//				for (int k = 0, t = 0;(t <= num[i] && (j + k <= n));k += sub[i], t++)
//					c2[j + k] += c1[j];
//			}
//		}
//
//		for (int j = 0;j <= n;j++)
//		{
//			c1[j] = c2[j];
//			c2[j] = 0;
//		}
//		cout << c1[n] << endl;
//
//	}
//}





//2080
//#include<iostream>
//#include<cmath>
//using namespace std;
//int T;
//int main()
//{
//	cin >> T;
//	double a, b, c, t;
//	while (T--)
//	{
//		double x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		a = sqrt(x1 * x1 + y1 * y1);
//		b = sqrt(x2 * x2 + y2 * y2);
//		c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//		t = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / acos(-1.0));
//		printf("%.2lf\n", t);
//	}
//	return 0;
//}






//2081
//#include<iostream>
//using namespace std;
//int n;
//char t[12];
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		for (int i = 0;i < 11;i++)
//			cin >> t[i];
//		cout << 6;
//		for (int i = 6;i < 11;i++)
//			cout << t[i];
//		cout << endl;
//
//	}
//}





//2082
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int w[30], num[30], dp[55][55];
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		memset(w, 0, sizeof w);
//		memset(dp, 0, sizeof dp);
//		for (int i = 1;i <= 26;i++)
//		{
//			w[i] = i;
//			cin >> num[i];
//		}
//		dp[0][0] = 1;
//		for (int i = 1;i <= 26;i++)
//			for (int j = 0;j <= 50;j++)
//				for (int k = 0;k <= num[i] && w[i] * k <= j;k++)
//					dp[i][j] += dp[i - 1][j - w[i] * k];
//		int res = 0;
//		for (int i = 1;i <= 50;i++)
//			res += dp[26][i];
//		cout << res << endl;
//	}
//
//}




//2083
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//const int N = 510;
//int n;
//int d[N];
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		int t;
//		cin >> t;
//		for (int i = 0;i < t;i++)
//			cin >> d[i];
//		sort(d, d + t);
//		int mid = (t - 1) / 2;
//		cout << d[mid] << endl;
//	}
//}




//2084
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 110;
//int x;
//int a[110][110];
//int dp[110][110];
//int main()
//{
//	cin >> x;
//	while (x--)
//	{
//		int n;
//		cin >> n;
//		for (int i = 0;i < n;i++)
//			for (int j = 0;j <= i;j++)
//				cin >> a[i][j];
//
//		for (int i = 0;i <= n - 1;i++)
//			dp[n - 1][i] = a[n - 1][i];
//
//		for (int i = n - 1;i >= 0;i--)
//			for (int j = 0;j <= i;j++)
//				dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + a[i][j];
//
//		cout << dp[0][0] << endl;
//	}
//}




//2085
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int n;
//int main()
//{
//	while (cin >> n)
//	{
//		if (n == -1)
//			break;
//		ll h = 1, l = 0;
//		for (int i = 0;i < n;i++)
//		{
//			ll tmp = h;
//			h = h * 3 + l * 2;
//			l = tmp + l;
//		}
//		cout << h << ',' << " " << l << endl;
//	}
//	return 0;
//}





//#include<iostream>
//using namespace std;
//int n;
//const int N = 3010;
//double c[N],sum[N];
//int main()
//{
//	while (~scanf("%d", &n))
//	{
//		double st, ed;
//		cin >> st >> ed;
//		for (int i = 1;i <= n;i++) cin >> c[i];
//		double res = 0.0;
//		for (int i = 1;i <= n;i++)
//		{
//			sum[i] = sum[i - 1] + c[i];
//			res += sum[i];
//		}
//		double cnt = (n * st + ed - 2 * (res)) / (n + 1);
//		printf("%.2lf\n", cnt);
//	}
//}



//2087
//#include<iostream>
//#include<string.h>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	while (cin >> s1)
//	{
//		if (s1 == "#") break;
//		cin >> s2;
//		int i = 0, j = 0;
//		while (i != s1.size())
//		{
//			if (s1.substr(i, s2.size()) == s2)
//			{
//				i += s2.size();
//				j++;
//			}
//			else i++;
//		}
//		cout << j << endl;
//	}
//	return 0;
//}



#include<iostream>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;
const int N = 1010;
int ne[N];
int main()
{
	string s1, s2;
	while (cin >> s1)
	{
		int res = 0;
		if (s1 == "#") break;
		cin >> s2;
		for (int i = 2, j = 0;i < s2.size();i++)
		{
			while (j && s2[i] != s2[j + 1]) j = ne[j];
			if (s2[i] == s2[j + 1]) j++;
			ne[i] = j;
		}
		for (int i = 1, j = 0;i <= s1.size();i++)
		{
			while (j && s1[i] != s2[j + 1]) j = ne[j];
			if (s1[i] == s2[j + 1]) j++;
			if (j == s2.size())
			{
				res++;
				j = ne[j];
			}
		}
		cout << res << endl;
	}
	return 0;
}