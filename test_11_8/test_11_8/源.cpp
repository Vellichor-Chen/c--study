#define  _CRT_SECURE_NO_WARNINGS 1
/*
���ȿ����Ⱦ������ҵ�����
4��2*2 5��2*3 6��3*3 7��3*4 8��4*4 9��4*5 10��5*5 
����a+b(a>0,b>0)���ԣ�a+b>=2sqrt(ab) �Ⱥŵ��ҽ���a==bʱȡ
a,bԽ�ӽ�����ôab��Խ��
�ʿ��Եó����ۣ�һ����2n,max=n*n ; 2n+1,max=n*(n+1)
��ô����Ժܺõض�Ӧ�����������ӣ�4/2=2��5/2=2����5+1��/2=3  ......
����n=1 max=1; n=2 max=2; n=3 max=3; n=4 max=4
����ֻ��Ҫ֪��1��2��3�Ĵ𰸣���������������ת��Ϊ1��2��3���Ӷ��ó���
������n=2001���ԣ�
��һ����ת��Ϊ1000*1001
�ڶ�����ת��Ϊ500*500*500*501
...
�������2.3���
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
