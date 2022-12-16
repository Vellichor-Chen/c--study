#define  _CRT_SECURE_NO_WARNINGS 1
//2096
//#include<iostream>
//using namespace std;
//int T;
//int main()
//{
//	cin >> T;
//	while (T--)
//	{
//		int a, b;
//		cin >> a >> b;
//		a %= 100;
//		b %= 100;
//		cout << (a + b) % 100 << endl;
//	}
//}




//2097
//#include<iostream>
//using namespace std;
//int n;
//int main()
//{
//	while (cin >> n && n)
//	{
//		int res = n % 10 + n / 10 % 10 + n / 100 % 10 + n / 1000 % 10;
//		int res1 = n % 12 + n / 12 % 12 + n / 12 / 12 % 12 + n / 12 / 12 / 12 % 12;
//		int res2 = n % 16 + n / 16 % 16 + n / 16 / 16 % 16 + n / 16 / 16 / 16 % 16;
//		if (res == res1 && res == res2)
//			printf("%d is a Sky Number.\n", n);
//		else
//			printf("%d is not a Sky Number.\n", n);
//	}
//}




//2098
//#include<iostream>
//using namespace std;
//int n;
//bool is_prime(int x)
//{
//	for (int i = 2;i <= x / 2;i++)
//		if (x % i == 0)
//			return false;
//	return true;
//}
//int main()
//{
//	while (~scanf("%d", &n) && n)
//	{
//		int sum = 0;
//		for (int i = 2;i < n / 2;i++)
//		{
//			if (is_prime(i) && (is_prime(n - i)))
//				sum++;
//		}
//		cout << sum << endl;
//	}
//}





//2099
//#include<iostream>
//using namespace std;
//int a, b;
//int main()
//{
//	while (cin >> a >> b && (a || b))
//	{
//
//		for (int i = 0;i < 100;i++)
//		{
//			if ((a * 100 + i) % b == 0)
//				printf("%02d ", i);
//		}
//		cout << endl;
//	}
//}
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int p[110];
//    int a, b;
//    while (cin >> a >> b && (a || b))
//    {
//        int k = 0;
//        for (int i = 0; i <= 99; i++)
//        {
//            if ((a * 100 + i) % b == 0)
//            {
//                p[k] = i;
//                k++;
//            }
//        }
//        for (int i = 0; i < k; i++)
//        {
//            if (i == k - 1)
//                printf("%02d\n", p[i]);
//            else
//                printf("%02d ", p[i]);
//        }
//    }
//}



#include<iostream>
#include<algorithm>
using namespace std;
const int N = 8;
/*int n;
int path[N];
bool s[N];
void dfs(int u)
{
    if(u==N)
    {
        for(int i=0;i<N;i++) cout<<path[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=1;i<=N;i++)
        if(!s[i])
        {
            path[u]=i;
            s[i]=true;
            dfs(u+1);
            s[i]=false;
        }
}
int main()
{
    dfs(0);
    return 0;
}
*/


int main()
{
    int arr[8] = { 1,2,3,4,5,6,7,8 };
    do
    {
        for (int i = 0;i <= 7;i++) cout << arr[i] << " ";
        cout << endl;
    } while (next_permutation(arr, arr + 8));
}