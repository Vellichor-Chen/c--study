//#define  _crt_secure_no_warnings 1
//
//
////#include<iostream>
////#include<algorithm>
////using namespace std;
////const int n = 1000010;
////int n;
////struct r
////{
////	int l, r;
////	bool operator< (const r& w)const
////	{
////		return r < w.r;
////	}
////}range[n];
////int main()
////{
////	cin >> n;
////	for (int i = 0;i < n;i++)
////	{
////		int l, r;
////		cin >> l >> r;
////		range[i] = { l,r };
////	}
////	sort(range, range + n);
////	int res = 0, ed = -2e6;
////	for(int i=0;i<n;i++)
////		if (range[i].l >= ed)
////		{
////			res++;
////			ed = range[i].r;
////		}
////	cout << res << endl;
////}
//
//
//
////
////#include<iostream>
////#include<algorithm>
////using namespace std;
////const int n = 100010;
////int n;
////int a[n];
////int main()
////{
////	cin >> n;
////	int res = 0;
////	for (int i = 1;i <= n;i++)
////	{
////		cin >> a[i];
////	}
////	for (int i = 1;i <= n;i++)
////	{
////		if (a[i] > a[i - 1])
////			res += a[i] - a[i - 1];
////	}
////	cout << res << endl;
////}
//
//
//
//
//
////#include<iostream>
////#include<cmath>
////using namespace std;
////const int n = 210;
////int t;
////char a[n];
////int main()
////{
////    cin >> t;
////    while (t--)
////    {
////        int n, flag = 1;
////        cin >> n;
////        for (int i = 0;i < n;i++) cin >> a[i];
////        for (int i = 0;i < n / 2;i++)
////        {
////            if (fabs(a[i] - a[n - i - 1]) == 2 || fabs(a[i] - a[n - i - 1]) == 0) flag = 1;
////            else
////            {
////                flag = 0;
////                break;
////            }
////        }
////        if (flag) cout << 1 << endl;
////        else cout << 0 << endl;
////    }
////}
//
//
//
//
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int n = 210;
//int t;
//char a[n];
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> a;
//        int res = 0;
//        for (int i = 0;i < strlen(a);i++)
//        {
//            if ((a[i] == 'm' && a[i - 1] == 'f') || (a[i] == 'f' || a[i - 1] == 'm'))
//            {
//                res++;
//                a[i] = a[i - 1] = 'j';
//            }
//        }
//        res = strlen(a) - res;
//        cout << res << endl;
//    }
//}
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int n = 210;
//int t;
//char a[n];
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> a;
//        int res = 0;
//        for (int i = 0;i < strlen(a);i++)
//        {
//            if ((a[i] == 'm' && a[i + 1] == 'f') || (a[i] == 'f' && a[i + 1] == 'm'))
//            {
//                res++;
//                a[i] = a[i + 1] = 'j';
//            }
//        }
//        res = strlen(a) - res;
//        cout << res << endl;
//    }
//}
//
//
//
//#include<iostream>
//using namespace std;
//typedef long long ll;
//ll t;
//ll a, b, l, r;
//ll gcd(int a, int b)
//{
//    return b ? gcd(b, a % b) : a;
//}
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> a >> b >> l >> r;
//        int flag = 0;
//        ll p = gcd(a, b);
//        ll s = a / p * b;
//        ll k = l / s;
//        for (ll i = k;;i++)
//        {
//            if (i * s >= l && i * s <= r)
//            {
//                flag = 1;
//                cout << i * s << endl;
//                break;
//            }
//            if (i * s > r) break;
//        }
//        if (!flag) cout << -1 << endl;
//    }
//}
//
//
//
//#include<iostream>
//using namespace std;
//int n;
//int main()
//{
//    cin >> n;
//    while (n--)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        if (a > 90 && b > 90 && c > 60) puts("a+");
//        else puts("e+");
//    }
//}
//
//
//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//int n, k;
//const int n = 5010;
//int a[n];
//int main()
//{
//    cin >> n >> k;
//    for (int i = 1;i <= n;i++) cin >> a[i];
//    sort(a + 1, a + n + 1);
//    int flag = 1;
//    for (int i = 2;i <= n;i++)
//    {
//        if (fabs(a[i] - a[i - 1]) > k)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (flag) puts("yes");
//    else puts("no");
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//typedef long long ll;
//using namespace std;
//ll x, k;
//int main()
//{
//    cin >> x >> k;
//    vector<ll> v;
//    while (x != 0)
//    {
//        v.push_back(x % k);
//        x /= k;
//    }
//    for (ll i = v.size() - 1;i >= 0;i--)
//    {
//        cout << v[i];
//    }
//}


//#include<iostream>
//using namespace std;
//const int N = 200010;
//char a[N];
//int res[N];
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0;i < n;i++)
//    {
//        cin >> a[i];
//        res[a[i]]++;
//    }
//    int flag = 1;
//    int cnt = 0;
//    for (int i = 'a';i <= 'z';i++)
//    {
//        if (res[i] % 2 == 0)
//        {
//            cnt += res[i];
//        }
//        else if (res[i] % 2 == 1 && flag == 1)
//        {
//            cnt += res[i];
//            flag = 0;
//        }
//        else
//        {
//            cnt += (res[i] / 2) * 2;
//        }
//    }
//    cout << cnt << endl;
//}




#include<iostream>
using namespace std;
typedef long long ll;
const int mod = 998857459;
ll n;
ll JC(ll x)
{
    ll res = 1;
    for (ll i = 2;i <= x;i++)
        res *= i;
    return res;
}
int main()
{
    cin >> n;
    while (n--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll s = 0;
        s += JC(a);
        cout << s << endl;
    }
}