#define  _CRT_SECURE_NO_WARNINGS 1
/*
首先可以先举例来找到规律
4：2*2 5：2*3 6：3*3 7：3*4 8：4*4 9：4*5 10：5*5 
对于a+b(a>0,b>0)而言，a+b>=2sqrt(ab) 等号当且仅当a==b时取
a,b越接近，那么ab就越大
故可以得出结论，一个数2n,max=n*n ; 2n+1,max=n*(n+1)
那么便可以很好地对应上上述的例子，4/2=2，5/2=2，（5+1）/2=3  ......
所以n=1 max=1; n=2 max=2; n=3 max=3; n=4 max=4
所以只需要知道1，2，3的答案，其他的数都可以转化为1，2，3，从而得出答案
对问题n=2001而言，
第一步是转化为1000*1001
第二步是转化为500*500*500*501
...
到最后由2.3组成
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int n;
const int N = 1e5 + 10;
typedef long long ll;
long long a[N];
ll t,r2,r3;
int main()
{
	cin >> n;
	ll res = 0;
	for (int i = 1;i <= n/3;i++)
	{
		if ((n - 3 * i) % 2 == 0)
		{
			res = pow(3, i) * pow(2, (n - 3 * i) / 2);
			{
				if (res > t)
				{
					t = res;
					r2 = (n - 3 * i) / 2, r3 = i;
				}
			}
		}
		else
		{
			res = pow(2, n / 2);
			{
				if (res > t)
				{
					t = res;
					r2 = n / 2, r3 = 0;
				}
			}
		}
	}
	cout << r2 << endl << r3;
	
}
