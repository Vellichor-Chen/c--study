#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int x, y, a, b;
typedef long long ll;
ll dp[50][50];
bool st[50][50];
int dx[9] = { 0,1,1,-1,-1,2,2,-2,-2 };
int dy[9] = { 0,2,-2,2,-2,1,-1,1,-1 };
int main()
{
    cin >> x >> y >> a >> b;
    memset(dp, 0, sizeof dp);
    memset(st, true, sizeof st);
    dp[0][0] = 1;

    for (int i = 0;i <= 8;i++)
    {
        int xx = a + dx[i], yy = b + dy[i];
        st[xx][yy] = false;
    }

    for (int i = 1;i <= x;i++)
        if (st[i][0])
            dp[i][0] = dp[i - 1][0];

    for (int i = 1;i <= y;i++)
        if (st[0][i])
            dp[0][i] = dp[0][i - 1];

    for (int i = 1;i <= x;i++)
        for (int j = 1;j <= y;j++)
            if (st[i][j])
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

    cout << dp[x][y] << endl;


}


#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N = 40;
ll dp[N][N];
int main()
{
    int n, m;
    cin >> n >> m;
    dp[0][1] = 1;
    for (int i = 1;i <= m;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (j == 1)
                dp[i][j] = dp[i - 1][n] + dp[i - 1][2];
            else if (j == n)
                dp[i][j] = dp[i - 1][n - 1] + dp[i - 1][1];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
        }
    }
    cout << dp[m][1] << endl;
    return 0;
}

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int mod = 2333;
const int N = 3005;
template<class T>inline void read(T& res)
{
    char c;T flag = 1;
    while ((c = getchar()) < '0' || c > '9')if (c == '-')flag = -1;res = c - '0';
    while ((c = getchar()) >= '0' && c <= '9')res = res * 10 + c - '0';res *= flag;
}
int m, n;
typedef long long ll;
int g[N][N];
int dp[N][N];
int main()
{
    read(m), read(n);
    for (int i = 1;i <= m;i++)
        for (int j = 1;j <= n;j++)
            read(g[i][j]);
    dp[m + 1][1] = 1;
    for (int i = m;i >= 0;i--)
        for (int j = 1;j <= n;j++)
            if (g[i][j] == 0)
                dp[i][j] = (dp[i][j - 1] + dp[i + 1][j]) % mod;
    cout << dp[1][m] % mod << endl;
}


