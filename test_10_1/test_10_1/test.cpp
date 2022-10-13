#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define N 0X3f3f3f3f
char str[N] = { 0 };
int main()
{
	long long n,m,j;
	long long sum,cnt;
	cin >> n;
	while (n--)
	{
		cin >> m;
		for (long long i = 0;i < m;i++)
		{
			cin >> str[i];
		}
		cnt = 0;
		long long p = 0,q = 0;
		for (long long i = q;str[i] != '\0';i++)
		{
			for (j=p;j <= i;j++)
			{
				if (j == p)
				{
					sum = 1;
				}
				sum  *= ((long long)str[j] - 48);
				if (sum % 2 == 0)
				{
					cnt++;
				}
				if (str[i]=='\0')
				{
					p++;
					q = p;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}