//#include<iostream>
//using namespace std;
//int n;
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 0)
//		return;
//	hanoi(n - 1, a, c, b);
//	printf("Move disk %d from %c to %c\n", n, a, c);
//	hanoi(n - 1, b, a, c);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	hanoi(n, 'A', 'B', 'C');
//}

#define  _CRT_SECURE_NO_WARNINGS 1

//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int primes[100000];
//int dp[1000][2]={0};
//int res[1000];
//string str;
//int main()
//{
//	int k = 0;
//	cin >> str;
//	for(int i=0;i<str.size();)
//	{
//		int n = 0;
//		while (str[i] != ',')
//		{
//			n = str[i]-'0';
//			i++;
//			if(str[i]!=','&&i<str.size())
//				n = n * 10 + (str[i]-'0');
//		}
//		primes[k++] = n;
//		i++;
//	}
//	for (int i = 0;i < k;i++) cout << primes[i];
//	dp[0][0] = -primes[0], dp[0][1] = 0;
//	for (int i = 1;i <= k;i++)
//	{
//		dp[i][0] = max(dp[i - 1][0], -primes[i]);
//		dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + primes[i]);
//	}
//	cout << dp[k-1][1] << endl;
//}






//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1000;
//int n;
//int dp[N][N];
//int coin[4] = { 1,5,10,25 };
//int main()
//{
//	cin >> n;
//	for (int i = 1;i <= n;i++) dp[0][i] = 0;  // 0种硬币凑成i元
//	for (int i = 0;i <= 4;i++) dp[i][0] = 1;  // i种硬币凑成0元
//	for (int i = 1;i <= 4;i++)
//		for (int j = 1;j <= n;j++)
//			for (int k = 0;k <= j / coin[i - 1];k++)
//				dp[i][j] += dp[i - 1][j - k * coin[i - 1]];
//	cout << dp[4][n];
//		
//}




//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1010;
//int n, m;
//int w[N], v[N];
//int f[N];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1;i <= n;i++) cin >> w[i];
//	for (int i = 1;i <= n;i++) cin >> v[i];
//	for (int i = 1;i <= n;i++)
//	{
//		for (int j = m;j >=v[i];j--)
//		{
//			f[j] = f[j];
//			f[j] = max(f[j], f[j - v[i]] + w[i]);
//		}
//	}
//	cout << f[m] << endl;
//}


//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//const int N = 110;
//int n, m;
//int g[N][N], d[N][N];
//typedef pair<int, int>PII;
//PII q[N * N],Prev[N][N];
//int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//char direction[4] = { 'L','U','R','D' };
//#include<stack>
//stack<char> s;
//int bfs()
//{
//	int hh = 0, tt = 0;
//	q[0] = { 0,0 };
//	memset(d, -1, sizeof d);
//	d[0][0] = 0;
//	while (hh <= tt)
//	{
//		auto t = q[hh++];
//		for (int i = 0;i < 4;i++)
//		{
//			int x = t.first + dx[i], y = t.second + dy[i];
//			if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
//			{
//				d[x][y] = d[t.first][t.second] + 1;
//				Prev[x][y] = t;
//				q[++tt] = { x,y };
//			}
//		}
//	}
//	int x = n - 1, y = m - 1;
//	while (x || y)
//	{
//		PII t = Prev[x][y];
//		if (t.first - x == 1 && t.second - y == 0) s.push('U');
//		if (t.first - x == -1 && t.second - y == 0) s.push('D');
//		if (t.first - x == 0 && t.second - y == 1) s.push('L');
//		if (t.first - x == 0 && t.second - y == -1) s.push('R');
//		x = t.first, y = t.second;
//	}
//	return d[n - 1][m - 1];
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0;i < n;i++)
//		for (int j = 0;j < m;j++)
//			cin >> g[i][j];
//	cout << bfs() << endl;
//	while (s.size())
//	{
//		cout << s.top();
//		s.pop();
//	}
//}




//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 510;
//double g[N][N];
//double dist[N];
//bool st[N];
//int n, m, s, e;
//int Dijkstra(int x)
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
//		if (dist[n] == 0x3f3f3f3f) return -1;
//		return dist[n];
//	}
//}
//int main()
//{
//	cin >> n >> m >> s >> e;
//	memset(g, 0x3f, sizeof g);
//	for (int i = 0;i < m;i++)
//	{
//		int a, b;
//		double c;
//		cin >> a >> b >> c;
//		g[a][b] = min(g[a][b], c);
//	}
//	cout << Dijkstra(e)-Dijkstra(s) << endl;
//}





//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int q[N];
//int res = 0;
//void quick_sort(int q[],int l,int r)
//{
//	res++;
//	if (l >= r) return;
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j), quick_sort(q, j + 1,r);
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0;i < n;i++) cin >> q[i];
//	quick_sort(q, 0, n - 1);
//	cout << res << endl;
//	for (int i = 0;i < n;i++) cout << q[i] << " ";
//	return 0;
//}


//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int q[N], tmp[N];
//int res = 0;
//void merge_sort(int q[], int l, int r)
//{
//    res++;
//    if (l >= r) return;
//    int mid = l + r >> 1;
//    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//    int k = 0, i = l, j = mid + 1;
//    while (i <= mid && j <= r)
//    {
//        if (q[i] <= q[j]) tmp[k++] = q[i++];
//        else tmp[k++] = q[j++];
//    }
//    while (i <= mid) tmp[k++] = q[i++];
//    while (j <= r) tmp[k++] = q[j++];
//    for (i = l, j = 0;i <= r;i++, j++) q[i] = tmp[j];
//}
//int main()
//{
//    cin >> n;
//    for (int i = 0;i < n;i++) cin >> q[i];
//    merge_sort(q, 0, n - 1);
//    cout << res << endl;
//    for (int i = 0;i < n;i++) cout << q[i] << " ";
//    return 0;
//}




#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int n;
int q[N], tmp[N];
void merge_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int mid = l + r >> 1;
	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r)
	{
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else tmp[k++] = q[j++];
	}
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= r) tmp[k++] = q[j++];
	for (i = l, j = 0;i < n;i++) q[i] = tmp[j];
}
int main()
{
	cin >> n;
	for (int i = 0;i < n;i++) cin >> q[i];
	merge_sort(q, 0, n - 1);
	for (int i = 0;i < n;i++) cout << q[i] << " ";
	return 0;
}