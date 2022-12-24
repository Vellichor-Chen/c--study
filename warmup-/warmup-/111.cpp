#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 4e6+10;
typedef long long ll;
ll f[N];
int n;
int main()
{
	cin >> n;
	ll res = 0;
	int flag = 0;
	for (int i = 1;i <= n;i++)
	{
		cin >> f[i];
		res += f[i];
		if (f[i] % 2 == 1) flag = 1;
	}
	if (res % 2 == 1 || flag) cout << "Antinomy";
	else cout << "XiJam";
}