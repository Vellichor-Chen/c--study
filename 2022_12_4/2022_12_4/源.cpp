#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 0x3f3f3f3f;
typedef long long ll;
ll a[N], b[N], c[N], d[N];
ll n, m, w, ans;
ll p = 0;
void dfs(ll aa, ll bb, ll cc)
{
    if (aa == n)
    {
        ans = max(ans, bb * cc);
        return;
    }
    dfs(aa + 1, bb + a[aa + 1], max(cc - b[aa + 1], p));
    dfs(aa + 1, max(bb - d[aa + 1], p), cc + c[aa + 1]);
}
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    dfs(0, 0, 0);
    cout << ans << endl;
}



#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 10;
int s[9][9];
bool check(int x, int y, int z)
{
    for (int i = 0;i < 9;i++)
    {
        if (s[x][i] == z) return false;
        if (s[i][y] == z) return false;
    }
    int xx = (x / 3) * 3, yy = (y / 3) * 3;
    for (int i = xx;i <= xx + 2;i++)
        for (int j = yy;j <= yy + 2;j++)
            if (s[i][j] == z)
                return false;
    return true;
}
void dfs(int x, int y)
{
    if (x == 9 && y == 0)
    {
        for (int i = 0;i < 9;i++)
            for (int j = 0;j < 9;j++)
                printf("%d%c", s[i][j], j == 8 ? '\n' : ' ');
    }
    if (y == 9) dfs(x + 1, 0);
    else
    {
        if (s[x][y]) dfs(x, y + 1);
        else
        {
            for (int i = 1;i <= 9;i++)
                if (check(x, y, i))
                {
                    s[x][y] = i;
                    dfs(x, y + 1);
                    s[x][y] = 0;
                }
        }
    }
}

int main()
{
    for (int i = 0;i < 9;i++)
        for (int j = 0;j < 9;j++)
            cin >> s[i][j];
    dfs(0, 0);
    return 0;
}




#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
const ll N = 1001000;
ll ans = 0, cnt = 0, pos = 0;
ll a[N];
void dfs(ll n)
{
    if (n >= 44444444444) return;
    a[cnt++] = n * 10 + 4;
    a[cnt++] = n * 10 + 7;
    dfs(n * 10 + 4), dfs(n * 10 + 7);
}
int main()
{
    ll l, r;
    cin >> l >> r;
    dfs(0);
    sort(a, a + cnt);
    for (ll i = l;i <= r;i++)
    {
        while (a[pos] < i) pos++;
        ans += a[pos];
    }
    cout << ans;
}


#include<iostream>
#include<algorithm>
using namespace std;
int T;
typedef long long ll;
const int N = 100;
ll f[N];
int main()
{
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        f[0] = 1, f[1] = 1;
        for (int i = 2;i <= 100;i++)
            f[i] = f[i - 1] + f[i - 2];
        cout << f[x] << endl;
    }
}




#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int T;
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
ll f[N];
int main()
{
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        f[1] = 3, f[2] = 9;
        for (int i = 3;i <= x;i++)
        {
            f[i] = (2 * f[i - 1] + 2 * f[i - 2]) % mod;
        }
        cout << f[x] << endl;
    }
    return 0;
}





#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll N = 1000000000000, M = 1e5 + 10;
int t;
ll f[M];
ll dfs(ll x)
{
    if (x <= 2) return 0;
    if (x % 2 == 0) return dfs(x / 2) * 2;
    else return dfs(x / 2) + dfs((x + 1) / 2) + 1;
}
int main()
{
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll res = dfs(x);
        cout << res << endl;
    }
}

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
const int N = 1010;
typedef long long ll;
ll f[N][N];
int main()
{
    cin >> n;
    ll k = 1;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j <= i;j++)
        {
            f[i][j] = k++;
        }
    }
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j <= i;j++)
        {
            printf("%4lld", f[i][j]);
        }
        cout << endl;
    }
}

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int f, v;
const ll N = 1010;
ll g[N][N], dp[N][N];
ll s[N];
int main()
{
    cin >> f >> v;
    for (int i = 1;i <= f;i++)
        for (int j = 1;j <= v;j++)
        {
            cin >> g[i][j];
            dp[i][j] = -0x3f3f3f3f;
        }
    for (int i = 1;i <= f;i++)
        for (int j = 1;j <= v;j++)
            for (int k = i - 1;k <= j - 1;k++)
                dp[i][j] = max(dp[i][j], dp[i - 1][k] + g[i][j]);
    ll res = -0x3f3f3f3f;
    for (int i = f;i <= v;i++)
        res = max(res, dp[f][i]);
    cout << res << endl;
    ll cnt = f;
    for (int i = f;i >= 1;i--)
        for (int j = 1;j <= v;j++)
        {
            if (dp[i][j] == res)
            {
                s[cnt--] = j;
                res -= g[i][j];
                break;
            }
        }
    for (int i = 1;i <= f;i++)
        cout << s[i] << " ";
    return 0;
}


