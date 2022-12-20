//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 110;
//int a[N], dp1[N], dp2[N];
//int n;
//int main()
//{
//    cin >> n;
//    for (int i = 1;i <= n;i++)
//        cin >> a[i];
//    for (int i = 1;i <= n;i++)
//    {
//        dp1[i] = 1;
//        for (int j = 1;j < i;j++)
//            if (a[i] > a[j])
//                dp1[i] = max(dp1[i], dp1[j] + 1);
//    }
//    for (int i = n;i >= 1;i--)
//    {
//        dp2[i] = 1;
//        for (int j = n;j > i;j--)
//            if (a[i] > a[j])
//                dp2[i] = max(dp2[i], dp2[j] + 1);
//    }
//    int x = -1;
//    for (int i = 1;i <= n;i++)
//        x = max(x, dp1[i] + dp2[i] - 1);
//    cout << n - x << endl;
//
//}
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 2e4 + 10;
//int a[N], dp[N];
//int main()
//{
//    int v, n;
//    cin >> v >> n;
//    int res = 0;
//    for (int i = 1;i <= n;i++)
//        cin >> a[i];
//    for (int i = 1;i <= n;i++)
//        for (int j = v;j >= 1;j--)
//            if (j >= a[i])
//                dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
//    cout << v - dp[v] << endl;
//}
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 2e5 + 10;
//typedef long long ll;
//ll a[N], dp[N];
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n, k;
//        cin >> n >> k;
//        for (int i = 1;i <= n;i++)
//        {
//            cin >> a[i];
//            a[i] += a[i - 1];
//        }
//        ll res1 = -1e18, res2 = -1e18;
//        for (int i = k;i + k <= n;i++)
//        {
//            res1 = max(res1, a[i] - a[i - k]);
//            res2 = max(res2, res1 + a[i + k] - a[i]);
//        }
//        cout << res2 << endl;
//    }
//}
//



//
//#include<iostream>
//using namespace std;
//int n;
//const int N = 1e5;
//int a[N];
//bool check(int x)
//{
//	for (int i = 2;i <= x / i;i++)
//		if (x % i == 0)
//			return false;
//	return true;
//}
//int main()
//{
//	cin >> n;
//	cout << n << "=";
//	int k = 0;
//	for (int i = 2;i <= n;i++)
//	{
//		if (n % i == 0 && check(i))
//		{
//			a[k++] = i;
//			n /= i;
//			i = 1;
//		}
//	}
//
//	for (int i = 0;i < k;i++)
//	{
//		if (i == k - 1)
//			cout << a[i];
//		else
//			cout << a[i] << "*";
//	}
//	return 0;
//}



//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//char c[5][110];
//int s[5];
//int main()
//{
//	int tmp = 0, idx = 0;
//	for (int i = 0;i < 5;i++)
//	{
//		cin >> c[i];
//		s[i] = strlen(c[i]);
//		if (s[i] > tmp)
//		{
//			tmp = s[i];
//			idx = i;
//		}
//	}
//	cout << c[idx];
//
//}



#include<iostream>
using namespace std;
typedef long long ll;
ll dp[31];
int main()
{
	int n;
	cin >> n;
	dp[1] = 1, dp[2] = 2;
	for (int i = 3;i <= n;i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	cout << dp[n] << endl;
}