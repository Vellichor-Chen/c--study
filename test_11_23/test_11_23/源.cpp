#define  _CRT_SECURE_NO_WARNINGS 1
//hdu 2062
//#include<iostream>
//using namespace std;
//typedef long long ll;
//ll n, m;
//int s[30];
//ll g[30];
//void init()
//{
//	g[0] = 0;
//	for (int i = 1;i <= 30;i++)
//		g[i] = g[i - 1] * (i - 1) + 1;
//}
//int main()
//{
//	init();
//	while (~scanf("%lld%lld", &n, &m))
//	{
//		for (int i = 0;i < 30;i++) s[i] = i;
//		while (n > 0 && m > 0)
//		{
//			int t = m / g[n] + (m % g[n] > 0 ? 1 : 0);
//			if (t > 0)
//			{
//				cout << s[t];
//				for (int i = t;i <= n;i++) s[i] = s[i + 1];
//				m = m - ((t - 1) * g[n] + 1);
//				if (m == 0) cout << endl;
//				else cout << " ";
//			}
//			n--;
//		}
//	}
//	return 0;
//}




//hdu 2063
//#include<iostream>
//using namespace std;
//int n;
//typedef long long ll;
//const int N = 40;
//ll a[N];
//void init()
//{
//	a[1] = 2;
//	for (int i = 2;i <= 35;i++)
//		a[i] = 3 * a[i - 1] + 2;
//}
//int main()
//{
//	init();
//	while (~scanf("%d", &n))
//	{
//		cout << a[n] << endl;
//	}
//}







//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 510, M = 1e3+10;
//int n1, n2, m;
//int h[N], e[M], ne[M], idx;
//int match[N];
//bool st[N];
//void add(int a, int b)
//{
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//bool find(int x)
//{
//    for (int i = h[x];i != -1;i = ne[i])
//    {
//        int j = e[i];
//        if (!st[j])
//        {
//            st[j] = true;
//            if (!match[j] || find(match[j]))
//            {
//                match[j] = x;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//int main()
//{
//    while (scanf("%d", &m))
//    {
//        if (m == 0) break;
//        memset(h, -1, sizeof h);
//        cin >> n1 >> n2;
//        while (m--)
//        {
//            int a, b;
//            cin >> a >> b;
//            add(a, b);
//        }
//        int res = 0;
//        for (int i = 1;i <= n1;i++)
//        {
//            memset(st, false, sizeof st);
//            if (find(i)) res++;
//        }
//        cout << res;
//    }
//}




//#include<iostream>
//#include<cstring>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//typedef long long ll;
//ll n;
//int quick_mi(ll a,ll k)
//{
//	int res = 1;
//	while (k)
//	{
//		if (k & 1) res = res * a % 100;
//		k >>= 1;
//		a = a * a % 100;
//	}
//	return res;
//}
//int main()
//{
//	while (cin>>n&&n)
//	{
//		ll x, i = 1;
//		while (n--)
//		{
//			cin >> x;
//			ll res = 0;
//			cout << "Case " << i++ << ": ";
//			cout << (quick_mi(4, x - 1) + quick_mi(2, x - 1)) % 100 << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}
//







//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 2010,INF = 0x3f3ff33f;
//int t, s, d;
//int g[N][N];
//int dist[N];
//bool st[N];
//int n;
//int dijkstra(int q)
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 0;i < n;i++)
//	{
//		int t = -1;
//		for (int j = 1;j <= n;j++)
//			if (!st[j] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		st[t] = true;
//		for (int j = 1;j <= n;j++)
//			dist[j] = min(dist[j], dist[t] + g[t][j]);
//	}
//	return dist[q];
//}
//int main()
//{
//	int res = INF;
//	while (~scanf("%d%d%d", &t, &s, &d))
//	{
//		memset(g, 0x3f, sizeof g);
//		while (t--)
//		{
//			int a, b, time;
//			cin >> a >> b >> time;
//			n = max(a, max(n, b));
//			g[b][a] = g[a][b] = min(g[a][b],time);
//		}
//		for (int i = 0;i < s;i++)
//		{
//			int x;
//			cin >> x;
//			g[0][x] = 0;
//		}
//		while (d--)
//		{
//			int q;
//			cin >> q;
//			res = min(res, dijkstra(q));
//		}
//		cout << res << endl;
//	}
//}









