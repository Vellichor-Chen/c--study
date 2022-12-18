//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 110;
//char g[N][N][N];
//int dist[N][N][N];
//int n;
//int dx[6] = { 1,-1,0,0,0,0 };
//int dy[6] = { 0,0,-1,1,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//struct Range
//{
//    int x, y, z;
//};
//void bfs()
//{
//    memset(dist, -1, sizeof dist);
//    dist[1][1][1] = 1;
//    queue<Range> q;
//    q.push({ 1,1,1 });
//    while (q.size())
//    {
//        auto t = q.front();
//        q.pop();
//        for (int i = 0;i < 6;i++)
//        {
//            int qx = t.x + dx[i], qy = t.y + dy[i], qz = t.z + dz[i];
//            if (qx > 0 && qx <= n && qy > 0 && qy <= n && qz > 0 && qz <= n && dist[qx][qy][qz] == -1 && g[qx][qy][qz] == '.')
//            {
//                q.push({ qx,qy,qz });
//                dist[qx][qy][qz] = dist[t.x][t.y][t.z] + 1;
//            }
//        }
//    }
//}
//int main()
//{
//    cin >> n;
//    for (int i = 1;i <= n;i++)
//        for (int j = 1;j <= n;j++)
//            for (int k = 1;k <= n;k++)
//                cin >> g[i][j][k];
//    bfs();
//    if (dist[n][n][n] == -1) cout << -1 << endl;
//    else cout << dist[n][n][n] << endl;
//    return 0;
//}
//
//
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//const int N = 200010;
//typedef pair<int, int>PII;
//int h[N], e[N], ne[N], w[N], idx;
//int dist[N];
//bool st[N];
//int n, m;
//void add(int a, int b, int c)
//{
//    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//void dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//    priority_queue<PII, vector<PII>, greater<PII>> heap;
//    heap.push({ 0,1 });
//    while (heap.size())
//    {
//        auto k = heap.top();
//        heap.pop();
//        int ver = k.second, distance = k.first;
//        if (st[ver]) continue;
//        st[ver] = true;
//        for (int i = h[ver];i != -1;i = ne[i])
//        {
//            int j = e[i];
//            if (dist[j] > distance + w[i])
//            {
//                dist[j] = distance + w[i];
//                heap.push({ dist[j],j });
//            }
//        }
//    }
//}
//int main()
//{
//    cin >> n >> m;
//    memset(h, -1, sizeof h);
//    while (m--)
//    {
//        int a, b;
//        cin >> a >> b;
//        add(a, b, 1);
//    }
//    int x, y;
//    cin >> x >> y;
//
//}




#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
const int N = 200010;
typedef pair<int, int>PII;
int h[N], e[N], ne[N], idx;
int dist[N], v[N];
int s, en, n, m;
bool st[N];
int x[N], y[N];
void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u)
{
    for (int i = h[u];~i;i++)
    {
        int j = e[i];
        if (v[j] == 0)
        {
            v[j] = 1;
            dfs(j);
        }
    }
}

void dijkstra()
{
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({ 0,s });
    memset(dist, 0x3f, sizeof dist);
    dist[s] = 0;
    while (heap.size())
    {
        auto v = heap.top();
        heap.pop();
        if (st[v.second]) continue;
        st[v.second] = true;
        for (int i = h[v.second];~i;i = ne[i])
        {
            int j = e[i];
            if (dist[j] > dist[v.second] + 1)
            {
                dist[j] = dist[v.second] + 1;
                if (j == en) break;
                heap.push({ dist[j],j });
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(h, -1, sizeof h);
    for (int i = 1;i <= m;i++)
    {
        cin >> x[i] >> y[i];
        add(x[i], y[i]);
    }
    cin >> s >> m;
    v[en] = 1;
    dfs(en);
    for (int i = 1;i <= n;i++)
    {
        if (v[i] == 0)
        {
            for (int j = h[i];~j;j = ne[j])
            {
                int k = e[j];
                if (v[k] != 0)
                    v[k] = 2;
            }
        }
    }
    if (v[s] != 1 || v[en] != 1)
    {
        cout << -1 << endl;
        return 0;
    }
    memset(e, 0, sizeof e);
    memset(h, -1, sizeof h);
    memset(ne, 0, sizeof ne);
    idx = 0;
    for (int i = 1;i <= m;i++)
    {
        if (v[x[i]] == 1 && v[y[i]] == 1)
            add(x[i], y[i]);
    }
    dijkstra();
    if (dist[en] == 0x3f3f3f3f) cout << -1 << endl;
    else cout << dist[en] << endl;
    return 0;
}



#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e5 + 10;
int n;
int a[N], b[N];
char ans[N];
int vis[N], st[N];
int flag = 0;
bool dfs(int len, int step)
{
    if (len > n || len < 0) return false;
    if (len == n) return true;
    if (vis[len])
    {
        st[len] = 1;
        return false;
    }
    vis[len] = 1;
    if (dfs(len + a[len], step + 1))
    {
        ans[step] = 'a';
        if (st[len])
        {
            flag = 1;
        }
        return true;
    }
    if (dfs(len + b[len], step + 1))
    {
        ans[step] = 'b';
        if (st[len])
        {
            flag = 1;
        }
        return true;;
    }
    return false;
}
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) cin >> b[i];
    if (dfs(1, 0))
    {
        if (flag) cout << "Infinity!" << endl;
        else puts(ans);
    }
    else
        cout << "No solution!" << endl;
    return 0;
}#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
const int N = 550;
typedef long long ll;
typedef pair<int, int>PII;
char g[N][N];
int sx, sy, kx, ky, ex, ey, dx, dy;
int dist[N][N];
bool st[N][N];
int ddx[4] = { 0,0,1,-1 };
int ddy[4] = { 1,-1,0,0 };
int n, m;
void bfs(int x, int y)
{
    memset(st, false, sizeof st);
    st[x][y] = 1;
    queue<PII>q;
    q.push({ x,y });
    memset(dist, 0x3f, sizeof dist);
    dist[x][y] = 0;
    while (q.size())
    {
        auto t = q.front();
        q.pop();
        st[t.first][t.second] = true;
        for (int i = 0;i < 4;i++)
        {
            int nx = t.first + ddx[i], ny = t.second + ddy[i];
            if (nx > 0 && ny > 0 && nx <= n && ny <= m && !st[nx][ny] && g[nx][ny] != 'w')
            {
                dist[nx][ny] = dist[t.first][t.second] + 1;
                q.push({ nx,ny });
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'S') sx = i, sy = j;
            if (g[i][j] == 'E') ex = i, ey = j;
            if (g[i][j] == 'D') dx = i, dy = j;
            if (g[i][j] == 'K') kx = i, ky = j;
        }
    }
    bfs(kx, ky);
    int res1 = dist[ex][ey];
    g[dx][dy] = 'w';
    bfs(sx, sy);
    int res2 = dist[kx][ky];
    int res3 = dist[ex][ey];
    int ans = min(res3, res1 + res2);
    if (ans >= 0x3f3f3f3f) cout << -1 << endl;
    else cout << ans << endl;
}