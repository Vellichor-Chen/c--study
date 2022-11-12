//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int q[N];
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;
//	while (i <= j)
//	{
//		do i++; while (q[i] < x);
//		do j++; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
////
//
//
//
//
//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//int n;
//int q[N], tmp[N];
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	for (int i = l, j = 0;i <= r;i++, j++) q[i] = tmp[j];
//}
////
//
//
//
//
//
//
//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int n, m;
//int q[N];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) cin >> q[i];
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		int l = 0, r = n - 1;
//		while (l < r)
//		{
//			int mid = l + r >> 1;
//			if (q[mid] >= x) r = mid;
//			else l = mid + 1;
//		}
//		if (q[l] != x) cout << "-1 -1 " << endl;
//		else
//		{
//			cout << 1 << " ";
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r + 1 >> 1;
//				if (q[mid] <= x) l = mid;
//				else r = mid - 1;
//			}
//			cout << 1 << endl;
//		}
//	}
//}
//
////
//
//
//
//
//
//
//
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> add(vector<int>& A, vector<int>& B)
//{
//	vector<int>c;
//	int t = 0;
//	for (int i = 0;i < A.size() || i < B.size();i++)
//	{
//		if (i < A.size()) t += A[i];
//		if (i < B.size()) t += B[i];
//		c.push_back(t % 10);
//		t /= 10;
//	}
//	if (t) c.push_back(1);
//	return c;
//}


//
//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int n;
//int a[N], s[N];
//int main()
//{
//	cin >> n;
//	for (int i = 0;i < n;i++) cin >> a[i];
//	int res = 0;
//	for (int i = 0, j = 0;i < n;i++)
//	{
//		s[a[i]]++;
//		while (s[a[i]] > 1)
//		{
//			s[a[j]]--;
//			j++;
//		}
//		res = max(res, i - j + 1);
//	}
//	cout << res << endl;
//}







//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 3e6 + 10;
//int n, m;
//int a[N], s[N];
//vector<int> alls;
//vector<PII> add, query;
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return r + 1;
//}





//HDU--2061
//#include<iostream>
//#include<string>
//using namespace std;
//int n;
//const int N = 1e2 + 10;
//double c[N], s[N];
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		int x,flag=1;
//		cin >> x;
//		double res1 = 0.0,res2=0.0;
//		string str;
//		for (int i = 0;i < x;i++)
//		{
//			cin >> str >> c[i] >> s[i];
//			res1 += c[i] * s[i];
//			res2 += c[i];
//		}
//		for (int i = 0;i < x;i++)
//			if (s[i] < 60) flag = 0;
//		if (!flag) printf("Sorry!\n");
//		else printf("%.2lf\n", res1*(1.0) / res2);
//		if (n != 0)
//		{
//			puts("");
//		}
//	}
//	return 0;
//}




//2062
#include<iostream>
using namespace std;