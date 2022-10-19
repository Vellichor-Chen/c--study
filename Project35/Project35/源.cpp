#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[max_n];
//	int n, k;
//	bool dfs(int i, int num)
//	{
//		if (i == n) return sum == k;
//		if (dfs(i + 1, sum)) return true;
//		if (dfs(i + 1, sum + a[i])) return true;
//		return false;
//	}
//	void slove()
//	{
//		if (dfs(0, 0)) cin >> "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}


//
//int main()
//{
//	int N, M;
//	char field[max_n][max_m + 1];
//	void dfs(int x, int y)
//	{
//		field[x][y] = '.';
//		for (int dx = -1;dx <= 1;dx++)
//		{
//			for (int dy = -1;dy <= 1;dy++)
//			{
//				int nx = dx + x;
//				int ny = dy + y;
//				if (0 <= nx && nx <= N && 0 <= ny && ny <= M && field[nx][ny] == 'W')
//					dfs(nx, ny);
//			}
//		}
//		return;
//	}
//	void slove()
//	{
//		int res = 0;
//		for (int i = 0;i < N;i++)
//		{
//			for (int j = 0;j < M;j++)
//			{
//				if (field[i][j] == 'W')
//				{
//					dfs(i, j);
//					res++;
//				}
//			}
//		}
//	}
//	cout << res;
//	return 0;
//}
//


//
//#include<queue>
//const int INF = 100000000;
//typedef pair<int, int>p;
//char maze[max_n][max_m + 1];
//int N, M;
//int sx, sy;
//int gx, gy;
//int d[max_n][max_m];
//int dx[4] = { 1,0,-1,0 }, dy[4] = { 1,0,-1,0 };
//int bfs()
//{
//	queue<p>que;
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < M;j++)
//			d[i][j] = INF;
//	}
//	que.push(p(sx,sy));
//	d[sx][sy] = 0;
//	while (que.size())
//	{
//		p P = que.front();
//		que.pop();
//		if (P.first == gx && P.second == gy)break;
//		for (int i = 0;i < 4;i++)
//		{
//			int nx = 
//		}
//	}
//}
//
//int n, w;
//int w[max], v[max];
//int rec(int i, int j)
//{
//	int res;
//	if (i == n)
//	{
//		res = 0;
//	}
//	else if (j < w[i])
//	{
//		res = rec(i + 1, j);
//	}
//	else
//	{
//		res = max(rec(i + 1, j), rec(i + 1, j - w[i] + v[i]));
//	}
//	return res;
//}
//void slove()
//{
//	cout << rec(0, W) << endl;
//}

//int main()
//{
//	int a = 3;
//	int b = 4, c = 5, d = 6;
//	if(a || ((b + c) && (d = (b - c))) = 1);
//	cout << d;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n, m;
//int q[N];
//void quick_sort(int q[], int l, int r)
//{
//    if (l >= r) return;
//    int x = q[l + r >> 1], i = l - 1, j = r + 1;
//    while (i < j)
//    {
//        do i++; while (q[i] < x);
//        do j--; while (q[j] > x);
//        if (i < j) swap(q[i], q[j]);
//    }
//    quick_sort(q, l, j);
//    quick_sort(q, j + 1, r);
//}
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0;i < n;i++) scanf("%d", &q[i]);
//    quick_sort(q, 0, n - 1);
//    for (int i = 0;i < n;i++)
//    {
//        if (i == m - 1)
//            printf("%d", q[i]);
//    }
//    return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//typedef long long ll;
//int n;
//int q[N], tmp[N];
//ll merge_sort(int l, int r)
//{
//    if (l >= r) return 0;
//    int mid = l + r >> 1;
//    ll res = merge_sort(l, mid) + merge_sort(mid + 1, r);
//    int k = 0, i = l, j = mid + 1;
//    while (i <= mid && j <= r)
//    {
//        if (q[i] <= q[j]) tmp[k++] = q[i++];
//        else
//        {
//            tmp[k++] = q[j++];
//            res += mid - i + 1;
//        }
//    }
//    while (i <= mid) tmp[k++] = q[i++];
//    while (j <= r) tmp[k++] = q[j++];
//    for (i = l, j = 0;i <= r;i++, j++) q[i] = tmp[j];
//    return res;
//}
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 0;i < n;i++) scanf("%d", &q[i]);
//    cout << merge_sort(0, n - 1) << endl;
//}







