#define  _CRT_SECURE_NO_WARNINGS 1
//2089
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int n, m;
//int a[1000010];
//int main()
//{
//	int cnt=0;
//	for (int i = 1;i < 1000000;i++)
//	{
//		if (i % 10 == 4 || i / 10 % 10 == 4 || i / 100 % 10 == 4 || i / 1000 % 10 == 4 || i / 10000 % 10 == 4) cnt++;
//		else if (i % 100 == 62 || i / 10 % 100 == 62 || i / 100 % 100 == 62 || i / 1000 % 100 == 62 || i / 100000 % 1000 == 62) cnt++;
//		else cnt++;
//		a[i] = a[i] + cnt;
//	}
//	while (cin >> n >> m && n && m)
//	{
//		cout << a[m] - a[n - 1] << endl;
//	}
//
//}



//2090
//#include<iostream>
//#include<string>
//using namespace std;
//string a;
//double b, c;
//int main()
//{
//	double res = 0.0;
//	while (cin >> a >> b >> c)
//	{
//		res += b * c;
//	}
//	printf("%.1lf\n", res);
//}





//2091
//#include<iostream>
//using namespace std;
//char a;
//int n;
//int main()
//{
//	while (cin >> a >> n)
//	{
//		if (a == '@') break;
//		for (int i = n - 1,k=0;i >= 0;i--,k++)
//		{
//			for (int j = 0;j < i;j++)
//			{
//				cout << " ";
//			}
//			for (int j = 1;j <= (k * 2 + 1);j++)
//			{
//				cout << a;
//			}
//			cout << endl;
//		}
//		if (n > 2)
//		{
//			for (int i = 1;i < n - 1;i++)
//			{
//
//			}
//		}
//	}
//}






//2092
//#include<iostream>
//using namespace std;
//int main()
//{
//	double n, m;
//	while (cin >> n >> m && n && m)
//	{
//		double x, y = 0;
//		for (int i = -10000;i <= 10000;i++)
//		{
//			x = n - i;
//			if (x * i == m)
//			{
//				cout << "Yes" << endl;
//				y = 1;
//				break;
//			}
//		}
//		if (y == 0)
//			cout << "No" << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    double n, m;
//    while (cin >> n >> m && (n != 0 || m != 0))
//    {
//        double Lu, Hui = 0;
//        for (int i = -10000; i <= 10000; i++)
//        {
//            Lu = n - i;
//            if (Lu * i == m)
//            {
//                cout << "Yes\n";
//                Hui = 1;
//                break;
//            }
//        }
//        if (Hui == 0)
//            cout << "No\n";
//    }
//    return 0;
//}




//2094
//#include<iostream>
//#include<algorithm>
//#include<set>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n!=0)
//	{
//		set<string> all;
//		set<string>lose;
//		for (int i = 0;i < n;i++)
//		{
//			string s1, s2;
//			cin >> s1 >> s2;
//			all.insert(s1);
//			all.insert(s2);
//			lose.insert(s2);
//		}
//		if (all.size() - lose.size() == 1)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//		cin >> n;
//	}
//}





//2095
// //TLE
//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10,M = 1e8;
//int n;
//int a[N], c[M];
//int main()
//{
//	while (cin >> n && n)
//	{
//		for (int i = 0;i < n;i++)
//		{
//			cin >> a[i];
//			c[a[i]]++;
//		}
//		for (int i = 0;i < n;i++)
//		{
//			if (c[a[i]] == 1)
//			{
//				cout << c[a[i]] << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}





//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (scanf("%d",&n) && n)
//	{
//		int a, res = 0;
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &a);
//			res ^= a;
//		}
//		printf("%d\n",res);
//	}
//}




