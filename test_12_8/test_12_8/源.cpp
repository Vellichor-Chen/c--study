//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//typedef long long ll;
//
//ll dp[100][100];
//
//ll qsm(ll a, ll b) {
//	ll res = 1;
//	while (b) {
//		if (b & 1) res = res * a;
//		b >>= 1;
//		a = a * a;
//	}
//	return res;
//}
//
//ll gcd(ll a, ll b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//
//	if (n == 0) {
//		printf("1/1\n");
//	}
//	else {
//		dp[0][0] = 1;
//		ll sum = qsm(4, n);
//
//		for (int i = 1;i <= n;i++) {
//			for (int j = i;j <= 4 * i;j++) {
//				for (int k = 1;k <= 4;k++) {
//					if (j >= k) dp[i][j] += dp[i - 1][j - k];
//				}
//			}
//		}
//		ll ans = 0;
//		for (int i = 3 * n;i <= 4 * n;i++) ans += dp[n][i];       //>=3*n²ÅËã²»¿÷±¾
//
//		ll g = gcd(ans, sum);
//
//		printf("%lld/%lld\n", ans / g, sum / g);
//
//	}
//
//	return 0;
//}
//
//
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 1e4 + 10;
//int a[N], dp[10005][200];
//int main()
//{
//	int n, m, k;
//	scanf("%d%d%d", &n, &m, &k);
//		for (int i = 1;i <= n;i++) scanf("%d", &a[i]);
//	memset(dp, -0x3f, sizeof dp);
//	for (int i = 1;i <= n;i++) dp[i][1] = max(dp[i - 1][1], a[i]);
//	for (int i = k + 1;i <= n;i++)
//		for (int j = 2;j <= m;j++)
//			dp[i][j] = max(dp[i - 1][j], dp[i - k][j - 1] + a[i]);
//	if (n / k >= m)
//		cout << dp[n][m] << endl;
//	else
//		cout << 0 << endl;
//}

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 3e5 + 10;
//int v[N], w[N];
//int dp[N];
//int main()
//{
//    int N, m;
//    cin >> N >> m;
//    for (int i = 1;i <= m;i++)
//        cin >> v[i] >> w[i];
//    for (int i = 1;i <= m;i++)
//        for (int j = N;j >= v[i];j--)
//            dp[j] = max(dp[j], dp[j - v[i]] + v[i] * w[i]);
//    cout << dp[N];
//}
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 110;
//int w[N];
//int dp[N];
//int main()
//{
//    int n, sum = 0;
//    cin >> n;
//    for (int i = 1;i <= n;i++)
//    {
//        cin >> w[i];
//        sum += w[i];
//    }
//    int res = sum;
//    sum /= 2;
//    for (int i = 1;i <= n;i++)
//        for (int j = sum;j >= w[i];j--)
//            dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
//    cout << min(dp[sum], res - dp[sum]) << " "
//        << max(dp[sum], res - dp[sum]) << endl;
//
//    return 0;
//}



#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 210;
int n;
int s[N];
int f[N][N];
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> s[i];
    for (int i = 1;i <= n;i++) s[i] += s[i - 1];
    for (int len = 2;len <= n;len++)
        for (int i = 1;i + len - 1 <= n;i++)
        {
            int l = i, r = i + len - 1;
            f[l][r] = 1e9;
            for (int k = l;k < r;k++)
                f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
        }
    cout << f[1][n] << endl;
    memset(f, 0, sizeof 0);
    for (int len = 2;len <= n;len++)
        for (int i = 1;i + len - 1 <= n;i++)
        {
            int l = i, r = i + len - 1;
            for (int k = l;k < r;k++)
                f[l][r] = max(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
        }
    cout << f[1][n];
}


#include<iostream>
#include<algorithm>
using namespace std;
const int N = 310;
int n;
int s[N];
int f[N][N];
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> s[i];
    for (int i = 1;i <= n;i++) s[i] += s[i - 1];
    for (int len = 2;len <= n;len++)
    {
        for (int i = 1;i + len - 1 <= n;i++)
        {
            int l = i, r = i + len - 1;
            f[l][r] = 1e8;
            for (int k = l;k < r;k++)
                f[l][r] = min(f[l][r], f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
        }
    }
    cout << f[1][n];
}