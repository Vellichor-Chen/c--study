#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//int n;
//int main()
//{
//    int idx = 1;
//    while (cin >> n)
//    {
//        if (n == -1) break;
//        int a = 2 * n, b = n;
//        int res = 1;
//        for (int i = a, j = 1;i > b;i--, j++)
//        {
//            res *= i;
//            res /= j;
//        }
//        cout << idx++ << " " << n << " ";
//        cout << res * 2 / (n+1) << endl;
//    }
//}

//
//#include<iostream>
//using namespace std;
//typedef long long ll;
//ll dp[40][40];
//int main()
//{
//	int n, res = 1;
//	for(int i=1;i<=36;i++)
//		dp[0][i] = 1;
//	for (int i = 1;i <= 35;i++)
//	{
//		for (int j = i;j <= 35;j++)
//		{
//			if (i == j)
//				dp[i][j] = dp[i - 1][j];
//			else
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//		}
//	}
//	while (cin >> n && n != -1)
//		cout << res++ << " " << n << " " << dp[n][n] * 2 << endl;
//		
//}



//#include<iostream>
//using namespace std;
//typedef long long ll;
//const int N = 25;
//int n;
//ll cp[N];
//void init()
//{
//	cp[1] = 0;
//	cp[2] = 1;
//	for (int i = 3;i <N;i++)
//		cp[i] = (i - 1) * (cp[i - 1] + cp[i - 2]);
//}
//ll zh(int n, int m)
//{
//	ll res = 1;
//	if (m == 0) return 1;
//	for (int i = 1,j = n ;i <= m;i++,j--)
//	{
//		res *= j;
//		res /= i;
//	}
//	return res;
//}
//int main()
//{
//	ll sum, ans;
//	init();
//	while (cin >> n)
//	{
//		if (n == 0) break;
//		sum = 1;
//		for (int i = 1;i <= n / 2;i++)
//		{
//			ans = cp[i] * zh(n, i);
//			sum += ans;
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}






//#include<iostream>
//#include<cstring>
//using namespace std;
//int n;
//int a[5] = { 1,5,10,25,50 };
//int dp[255][255];
//int main()
//{
//	while (~scanf("%d", &n))
//	{
//		memset(dp, 0, sizeof dp);
//		dp[0][0] = 1;
//		for (int i = 0;i < 5;i++)
//			for (int j = 1;j <= 110;j++)
//				for (int k = a[i];k <= n;k++)
//					dp[j][k] += dp[j - 1][k - a[i]];
//		int res = 0;
//		for (int i = 0;i <= 100;i++)
//		{
//			res += dp[i][n];
//		}
//		cout << res << endl;
//	}
//	
//}




//#include<iostream>
//using namespace std;
//const int N = 52;
//typedef long long ll;
//__int64 a[N];
//int main()
//{
//	int n;
//	a[0] = 0, a[1] = 1;
//	for (int i = 2;i < 51;i++)
//		a[i] = a[i - 1] + a[i - 2];
//	while (cin >> n && n >= 0)
//	{
//		cout << a[n] << endl;
//	}
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
int n;
int main()
{
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		double z;
		double maxn = 0.0;
		for (int i = 1;i <= x;i++)
		{
			cin >> z;
			maxn = max(maxn, z);
		}
		printf("%.2lf\n",maxn);
	}
}