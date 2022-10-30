#define  _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n==1||n==2||n==4||n==6||n==8)
	{
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0;j < 3-i-1;j++)
				cout << " ";
			for (int j = 0;j < 2 * i + 1;j++)
				cout << '*';
			cout << endl;
		}
		cout << "1";
	}
	else if(n==3||n==5||n==7)
	{
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0;j < i;j++)
				cout << " ";
			for (int j = 0;j < 5-2*i ;j++)
				cout << '!';
			cout << endl;
		}
		cout << "2";
	}
	else
	{
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0;j < 3 - i - 1;j++)
				cout << " ";
			for (int j = 0;j < 2 * i + 1;j++)
				cout << '@';
			cout << endl;
		}
		for (int i = 0;i < 2;i++)
		{
			for (int j = 0;j < i+1;j++)
				cout << " ";
			for (int j = 0;j < 3-2*i;j++)
				cout << '@';
			cout << endl;
		}
		cout << "0";
	}
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    long long a[81], m;
//    while (t--)
//    {
//        cin >> m;
//        a[1] = 1;
//        a[2] = 2;
//        for (int i = 3;i <= m;i++)
//        {
//            a[i] = a[i - 1] + a[i - 2];
//        }
//        cout << a[m] << endl;
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//const int mod = 1e9 + 7;
//const int N = 1e5 + 10;
//typedef long long ll;
//ll n;
//ll f[N];
//int main() {
//    int i;
//    cin >> n;
//    f[1] = 1; f[2] = 2;
//    for (i = 3;i <= n;i++)
//        f[i] = (f[i - 1] + (i - 1) * f[i - 2] % mod) % mod;
//    cout << f[n] << endl;
//    return 0;
//}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int ans = 0;
//    for (int i = 0; i <= n; ++i)
//    {
//        for (int j = 0; j <= n / 2; ++j)
//        {
//            for (int k = 0; k <= n / 5; ++k)
//            {
//                if (i + j * 2 + k * 5 == n) ++ans;
//            }
//        }
//    }
//    cout << ans;
//}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int T;
//int n, k, s;
//int h[1005];
//
//int main() {
//    cin >> T;
//    int casen = 1;
//    while (casen <= T) {
//        cin >> n >> k >> s;
//        for (int i = 1;i <= n;i++) {
//            cin >> h[i];
//        }
//        sort(h + 1, h + n + 1);
//        int ans = 0;
//        for (int i = n - k + 1;i >= 0;i -= k) {
//            ans += h[i];
//        }
//        ans *= s;
//        cout << ans << endl;
//        casen++;
//    }
//}
//
//
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s, ans;
//    int index = 0;
//    cin >> s;
//    for (int j = 'z'; j >= 'a'; j--)
//        for (int i = 0; i < s.size(); i++)
//            if (s[i] == j && i >= index)
//                ans += j, index = i;
//    cout << ans << endl;
//    return 0;
//}
//
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//double sumt = 0, sumc = 0;
//double minx = 2e9, maxx = -1;
//double ans;
//double T, C;
//
//int main()
//{
//    double t, c;
//    int i, j, n;
//    cin >> n;
//    cin >> T >> C;
//    sumt += T * C;
//    sumc += C;
//    for (i = 1; i <= n; ++i)
//    {
//        cin >> t >> c;
//        minx = min(minx, t);
//        maxx = max(maxx, t);
//        sumt += t * c;
//        sumc += c;
//    }
//    ans = (double)sumt / sumc;
//    if (ans <= minx)
//    {
//        cout << "Possible" << endl;
//        printf("%.4lf\n", minx);
//    }
//    else if (ans >= maxx)
//    {
//        cout << "Possible" << endl;
//        printf("%.4lf\n", ans);
//    }
//    else
//    {
//        cout << "Impossible" << endl;
//    }
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//int arr[100000];
//int main()
//{
//    int T, n, m;
//    cin >> n;
//    while (n--)
//    {
//        cin >> m;
//        for (int i = 0;i < m;i++)
//        {
//            cin >> arr[i];
//        }
//        sort(arr, arr + m);
//        int sum = 0;
//        for (int i = 1;i < m;i++)
//        {
//            sum += (arr[i] - arr[0]);
//        }
//        cout << sum << " ";
//        cout << sum + arr[0] << endl;
//    }
//
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long n, arr[100005], sum = 0, ans = 0;
//    cin >> n;
//    for (int i = 0;i < n;i++)
//    {
//        cin >> arr[i];
//        sum += arr[i];
//    }
//    sort(arr, arr + n);
//    for (int i = 0;i < n - 1;i++)
//    {
//        ans += sum;
//        sum -= arr[i];
//    }
//    cout << ans << endl;
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int arr[100005], n;
//    while (cin >> n)
//    {
//        for (int i = 0;i < n;i++)
//        {
//            cin >> arr[i];
//        }
//        sort(arr, arr + n);
//        int ans = unique(arr, arr + n) - arr;
//        cout << n - ans << endl;
//    }
//    return 0;
//}#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[1000010], n, m, ans;
//int main()
//{
//    while (cin >> n >> m)
//    {
//        ans = 0;
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//        sort(a, a + n);
//        for (int i = 1; i < n; i++)
//            if (a[i] - a[i - 1] > m)
//                ans++;
//        cout << ans + 1 << endl;
//    }
//    return 0;
//}#include<cstdio>
//#include<cstring>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int maxn = 1000 + 5;
//int a[maxn];
//
//int main() {
//    int t, n, m, b;
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d%d", &n, &m);
//        int cnt = 0;
//        for (int i = 1; i <= n; i++) {
//            scanf("%d%d", &a[i], &b);
//            if (b == 1) cnt++;
//        }
//        int minn = min(cnt, m);
//        sort(a + 1, a + n + 1);
//        double ans = 0.0;
//        for (int i = n; i >= 0; i--) {
//            if (minn > 0) {
//                ans += a[i] / 2.0;
//                minn--;
//            }
//            else ans += a[i];
//        }
//        printf("%.1lf\n", ans);
//    }
//    return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//long long sum, n, a[1000000];
//int main()
//{
//    cin >> n;
//    sum = 0;
//    for (int i = 1;i <= n;i++)
//    {
//        cin >> a[i];
//        if (a[i] < 0) sum += a[i] * i;
//        else sum += a[i];
//    }
//    cout << sum << endl;
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//long long n, ans = 0;
//long long num1[10000010], num2[10000010];
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> num1[i];
//    for (int i = 0; i < n; i++)
//        cin >> num2[i];
//    sort(num1, num1 + n);
//    sort(num2, num2 + n, greater<long long>());
//    for (int i = 0; i < n; i++)
//        if (num2[i] - num1[i] > 0)
//            ans += num2[i] - num1[i];
//    cout << ans;
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//const int maxn = 2e5 + 5;
//int a[maxn];
//int n, k;
//bool slove(int mid)
//{
//    for (int i = 1;i + mid - 1 <= n;i++)
//    {
//        if (a[mid + i - 1] - a[i] <= k)
//            return true;
//    }
//    return false;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> k;
//        for (int i = 1;i <= n;i++)
//            cin >> a[i];
//        sort(a + 1, a + 1 + n);
//        int l = 1, r = n;
//        while (l <= r)
//        {
//            int mid = (l + r) >> 1;
//            if (slove(mid)) l = mid + 1;
//            else r = mid - 1;
//        }
//        cout << r << endl;
//    }
//    return 0;
//}#include<bits/stdc++.h>
//using namespace std;
//long long n, a[101], sum;
//int main()
//{
//    cin >> n;
//    sum = 0;
//    for (int i = 0;i < n;i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1;i < n;i++)
//    {
//        sum += a[i] * a[i - 1];
//        a[i] += a[i - 1];
//    }
//    cout << sum;
//    return 0;
//}