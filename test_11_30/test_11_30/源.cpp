#define  _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 510;
int n, m;
int g[N][N], d[N][N];
typedef pair<int, int>PII;
PII q[N * N];
int sx, sy, ex, ey;
int bfs(int sx, int sy, int ex, int ey)
{
    int hh = 0, tt = 0;
    q[0] = { sx,sy };
    memset(d, -1, sizeof d);
    d[sx][sy] = 0;
    int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
    while (hh <= tt)
    {
        auto t = q[hh++];
        for (int i = 0;i < 4;i++)
        {
            int x = t.first + dx[i], y = t.second + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == '.' && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                q[++tt] = { x,y };
            }
        }
    }
    if (d[ex][ey] != -1) return 1;
    else return 0;
}
int main()
{
    while (cin >> n >> m)
    {
        memset(g, 0, sizeof g);
        for (int i = 0;i < n;i++)
            for (int j = 0;j < m;j++)
            {
                cin >> g[i][j];
                if (g[i][j] == 'S') sx = i, sy = j;
                if (g[i][j] == 'E') ex = i, ey = j;
            }
        if (bfs(sx, sy, ex, ey) == 1) puts("Yes");
        else puts("No");
    }
}




#include<iostream>
#include<cstring>
using namespace std;
const int N = 510;
char g[N][N];
bool st[N][N];
int n, m;
int sx, sy, ex, ey;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
void dfs(int sx, int sy)
{
    st[sx][sy] = true;
    for (int i = 0;i < 4;i++)
    {
        int x = sx + dx[i], y = sy + dy[i];
        if (x > 0 && x <= n && y > 0 && y <= m && (g[x][y] == '.' || g[x][y] == 'E') && !st[x][y])
        {
            dfs(x, y);
        }
    }
}
int main()
{
    while (cin >> n >> m)
    {
        memset(st, false, sizeof st);
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= m;j++)
            {
                cin >> g[i][j];
                if (g[i][j] == 'S') sx = i, sy = j;
                if (g[i][j] == 'E') ex = i, ey = j;
            }
        }
        dfs(sx, sy);
        if (st[ex][ey]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}



#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char g[8][110];
bool st[8][110];
int dx[8] = { 1,1,1,0,0,-1,-1,-1 };
int dy[8] = { -1,0,1,-1,1,-1,0,1 };
int m;
int q[305];
void dfs(int x, int y, int& ans, int k)
{
    if (g[x][y] == '.') return;
    int i, xx, yy;
    for (int i = 0;i < 8;i++)
    {
        xx = x + dx[i], yy = y + dy[i];
        if (yy >= 0 && yy < m && xx >= k && xx < k + 4 && !st[xx][yy])
        {
            if (g[xx][yy] == '*')
                ans++;
            st[xx][yy] = true;
            dfs(xx, yy, ans, k);
        }
    }
}
int main()
{
    cin >> m;
    getchar();
    int n, tot1 = 0, tot2 = 0;
    for (int i = 0;i < 8;i++) cin >> g[i];
    for (int i = 0;i < 4;i++)
        for (int j = 0;j < m;j++)
            if (g[i][j] == '*' && !st[i][j])
            {
                n = 1;
                st[i][j] = true;
                dfs(i, j, n, 0);
                tot1++;
            }
    for (int i = 4;i < 8;i++)
        for (int j = 0;j < m;j++)
            if (g[i][j] == '*' && !st[i][j])
            {
                n = 1;
                st[i][j] = true;
                dfs(i, j, n, 4);
                q[tot2++] = n;
            }
    int ans = 0;
    if (tot2 < tot1) puts("-1");
    else
    {
        sort(q, q + tot2);
        for (int i = tot1 - 1;i < tot2;i++)
            ans += q[i];
        cout << ans << endl;
    }
}