#define  _CRT_SECURE_NO_WARNINGS 1
//2060
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int left, p, o;
//		scanf("%d%d%d", &left, &p, &o);//剩下的球，自己得分，对手得分
//		if (left >= 7)
//		{
//			p += (left - 6) + (left - 6) * 7;//剩下的球减去彩球
//			for (int i = 2;i <= 7;i++)
//			{
//				p += i;
//			}
//		}
//		else if (left < 7)
//		{
//			for (int i = 7;i >7-left;i--)
//			{
//				p += i;
//			}
//		}
//		if (p >= o)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}


//#include <cstdio>
//using namespace std;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int b, p, o; // 剩余球的数量，自己得分，对手得分
//		scanf("%d %d %d", &b, &p, &o);
//		if (b >= 7)
//		{
//			p += (b - 6) + (b - 6) * 7;
//			for (int i = 2; i <= 7; i++)
//				p += i;
//		}
//		else if (b < 7)
//		{
//			for (int i = 7; i > 7 - b; i--)
//				p += i;
//		}
//		if (p >= o)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}

//栈、队列和stl
//
//#include<bits/stdc++.h>
//using namespace std;
///*int a[10];
//int main()
//{
//    for(int i=1;i<=8;i++)
//    {
//        a[i] = i;
//    }
//    do
//    {
//        for(int i=1;i<=8;i++)
//        {
//            if(i!=1)
//            {
//                cout<<' '<<a[i];
//            }
//            else
//            {
//                cout<<a[i];
//            }
//        }
//        cout<<endl;
//    }while(next_permutation(a+1,a+9));
//    return 0;
//}*/
//
//
//int a[10] = { 0 };
//int step[10] = { 0 };
//void dfs(int n)
//{
//    if (n == 9)
//    {
//        for (int i = 1;i <= 8;i++)
//        {
//            if (i != 1)
//            {
//                cout << ' ' << a[i];
//            }
//            else
//            {
//                cout << a[i];
//            }
//        }
//        cout << endl;
//        return;
//    }
//    for (int i = 1;i <= 8;i++)
//    {
//        if (step[i] == 0)
//        {
//            a[n] = i;
//            step[i] = 1;
//            dfs(n + 1);
//            step[i] = 0;
//        }
//    }
//}
//
//int main()
//{
//    dfs(1);
//    return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100001], b[100001], c[100001], n, k;
	long long sum = 0;
	cin >> n >> k;
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (int i = 0;i < n;i++)
	{
		cin >> b[i];
		sum += b[i];
		c[i] = a[i] - b[i];
	}
	sort(c, c + n);
	for (int i = n - 1;i >= n - k;i--)
	{
		sum += c[i];
	}
	cout << sum << endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int i,j,cnt,flag,sign;
    char arr[100];
    cin>>arr;
    for(i=0;i<strlen(arr)-1;i++)
    {
        if(arr[0] == 'b'|| strlen(arr)%2==1)
        {
            cout<<"Bad"<<endl;
            return 0;
        }
        if(arr[i]=='a')
        {
            flag = i;
            sign = 1;
        }
        for(j=i+1;j<strlen(arr);j++)
        {
            if(arr[j] == 'b'&&sign==1)
            {
                arr[j] = '0';
                arr[flag] = '0';
                sign = 0;
                break;
            }
        }
    }
    cnt=0;
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i] == '0')
            cnt++;
    }
    if(cnt == strlen(arr))
    {
        cout<<"Good"<<endl;
    }
    else
    {
        cout<<"Bad"<<endl;
    }
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[1000];
    while (cin >> n && n)
    {
        while (cin >> a[0] && a[0])//如果序列首元素为0，停止输入
        {
            for (int i = 1;i < n;i++) cin >> a[i];//已经输入a[0],从1开始到n-1
            stack<int> s;
            int index = 0;//标记
            for (int i = 1;i <= n;i++)
            {
                s.push(i);//入栈每一个元素
                while (!s.empty() && s.top() == a[index])//栈不为空且栈顶与标记的元素相同
                {
                    s.pop();//出栈
                    index++;//下标+1
                }
            }
            if (s.empty())cout << "Yes" << endl;//为空的话，代表全部匹配出栈
            else cout << "No" << endl;
        }
        cout << endl;
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    int n, x, t;
    cin >> n;
    stack<int> s;
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    t = n;
    for (int i = 0;i < n;i++)
    {
        if (s.size() == 0)
        {
            s.push(arr[i]);
            if (s.top() == t)
            {
                cout << s.top() << " ";
                t--;
                s.pop();
            }
        }
        else if (s.top() == t)
        {
            cout << s.top() << " ";
            t--;
            s.pop();
            s.push(arr[i]);
        }
        else
        {
            s.push(arr[i]);
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n, arr[1000000], pos[1000000];
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1;i >= 0;i--)
    {
        pos[i] = max(pos[i + 1], arr[i]);
    }
    for (int i = 0;i < n;i++)
    {
        s.push(arr[i]);
        if (s.top() == pos[i])
        {
            cout << s.top() << " ";
            s.pop();
            while (!s.empty() && s.top() > pos[i + 1])
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        if (str.length() == 1)
            cout << str << endl;
        else
        {
            stack<char>s;
            s.push(str[0]);
            for (int i = 1;i < str.length();i++)
            {
                if (s.empty())
                {
                    s.push(str[i]);
                }
                else
                {
                    if (s.top() == str[i])
                    {
                        if (s.top() == 'O')
                        {
                            s.pop();
                        }
                        else
                        {
                            s.pop();
                            if (!s.empty())
                            {
                                if (s.top() == 'o')
                                    s.push('O');
                                else
                                    s.pop();
                            }
                            else
                                s.push('O');
                        }
                    }
                    else
                        s.push(str[i]);
                }
            }
            stack<char>s1;
            while (!s.empty())
            {
                s1.push(s.top());
                s.pop();
            }
            while (!s1.empty())
            {
                cout << s1.top();
                s1.pop();
            }
            cout << endl;
        }
    }


    return 0;
}class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串
     * @return long长整型
     */
    long long legalExp(string str) {
        // write code here
        stack<long long>s;
        for (int i = 0;i < str.length();i++)
        {
            long long sum = 0;
            while ('0' <= str[i] && str[i] <= '9')
            {
                sum = sum * 10 + (str[i] - '0');
                i++;
            }
            if (str[i] == '+')
            {
                long long tmp = s.top();
                s.pop();
                tmp += s.top();
                s.pop();
                s.push(tmp);
                continue;
            }
            else if (str[i] == '-')
            {
                long long tmp = s.top();
                s.pop();
                tmp = s.top() - tmp;
                s.pop();
                s.push(tmp);
                continue;
            }
            else if (str[i] == '*')
            {
                long long tmp = s.top();
                s.pop();
                tmp *= s.top();
                s.pop();
                s.push(tmp);
                continue;
            }
            s.push(sum);
        }
        return s.top();
    }
};#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        map<string, int>m;
        queue<string>q;
        int n;
        cin >> n;
        string a, b, x;
        int cnt = 0;
        for (int i = 1;i <= n;i++)
        {
            cin >> a >> b;
            m[b] = 1;
            if (a == "in")
                q.push(b);
            if (a == "out")
            {
                x = q.front();
                while (!m[x] && !q.empty())
                {
                    q.pop();
                    x = q.front();
                }
                if (x == b && m[x])
                {
                    cnt++;
                    q.pop();
                }
                else if (m[x] && x != b)
                {
                    m[b] = 0;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
//}#include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    bool prime(int n)//判断是否是素数
    {
        for (int i = 2;i < n;i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int main()
    {
        int n, i, j, k;
        cin >> n;
        vector<ll> v;
        set<ll> s;
        for (i = 2;i <= 10005;i++)//遍历
        {
            if (prime(i))
            {
                v.push_back(i);//存入素数
            }
        }
        for (i = 0;i < v.size();i++)
        {
            for (j = 0;j < v.size();j++)
            {
                for (k = 0;k < v.size();k++)
                {
                    ll cnt = 0;
                    cnt = pow(v[i], 2) + pow(v[j], 3) + pow(v[k], 4);
                    if (cnt > n) break;
                    else s.insert(cnt);
                }
            }
        }
        cout << s.size();
        return 0;
    }


#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n, cnt, i, j;
        set<string>s;
        cin >> n;
        string c;
        string name = "younik";
        while (n--)
        {
            cin >> c;
            if (c == name)
                break;
            s.insert(c);
        }
        cout << s.size() + 1;
        return 0;
    }
#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n, t;
        string s;
        cin >> n >> t;
        cin >> s;
        long long pos = s.find('.');
        if (pos == s.npos)
        {
            cout << s << endl;
            return 0;
        }//npos等于size_max，如果找不到小数点，则直接输出s
        for (int i = pos + 1;i < s.size();i++)//小数点后一位开始找
        {
            if (s[i] >= '5')
            {
                s.erase(i--);
                t--;//5要四舍五入，则删除，t-1
                while (s[i] == '4' && t)
                {
                    s.erase(i--);
                    t--;//在四舍五入前提下，4进1为5，所以4也不能存在，直接删除
                }
                if (s[i] == '.')
                {
                    s.erase(i--);//删除小数点
                    while (s[i] == '9')
                    {
                        s[i--] = '0';
                    }
                    if (i == -1)
                    {
                        cout << "1";
                    }
                    else
                    {
                        s[i]++;
                    }
                }
                else
                    s[i]++;
            }
        }
        cout << s << endl;
        return 0;
    }


#include<bits/stdc++.h>
    using namespace std;
    const int N = 1e2 + 10;
    int flag, st[N];
    string s;
    int check(int s1, int s2)
    {
        if ((s1 == 1 && s2 == 3 && !st[2]) || (s1 == 3 && s2 == 1 && !st[2])) return 0;
        if ((s1 == 4 && s2 == 6 && !st[5]) || (s1 == 6 && s2 == 4 && !st[5])) return 0;
        if ((s1 == 7 && s2 == 9 && !st[8]) || (s1 == 9 && s2 == 7 && !st[8])) return 0;
        if ((s1 == 1 && s2 == 7 && !st[4]) || (s1 == 7 && s2 == 1 && !st[4])) return 0;
        if ((s1 == 2 && s2 == 8 && !st[5]) || (s1 == 8 && s2 == 2 && !st[5])) return 0;
        if ((s1 == 3 && s2 == 9 && !st[6]) || (s1 == 9 && s2 == 3 && !st[6])) return 0;
        if ((s1 == 1 && s2 == 9 && !st[5]) || (s1 == 9 && s2 == 1 && !st[5])) return 0;
        if ((s1 == 3 && s2 == 7 && !st[5]) || (s1 == 7 && s2 == 3 && !st[5])) return 0;
        if (st[s2]) return 0;
        return 1;
    }
    int main()
    {
        while (cin >> s)
        {
            flag = 1;
            memset(st, 0, sizeof(st));
            for (int i = 0;i + 1 < s.size();i++)
            {
                st[s[i] - '0']++;
                if (!check(s[i] - '0', s[i + 1] - '0'))
                    flag = 0;
            }
            if (flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        return 0;
    }

#include<bits/stdc++.h>
#include<stdio.h>
    using namespace std;
#define N 100000
    char str[N];
    int main() {
        int a = 0, k = 0, n, f = 0;
        while (scanf("%c", &str[++n]) != EOF);
        //	str[n]='&';
        n--;
        for (int i = 1; i <= n; i++) {
            if (str[i] == '"' && str[i - 1] != '\\') {
                cout << str[i];
                i++;
                while (1) {
                    cout << str[i];
                    if (i > n || str[i] == '"' && str[i - 1] != '\\')break;
                    i++;
                }
            }
            else if (str[i] == '/' && str[i + 1] == '*') {
                int j = i;
                i += 3;
                while (1) {
                    if (i > n || (str[i] == '/' && str[i - 1] == '*'))break;
                    i++;
                }
                //cout<<i<<endl;
                if (i > n) while (j <= n) cout << str[j++];

            }
            else cout << str[i];
        }
    }



#include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            string s, ans, tmp;
            cin >> s;
            for (int i = 0;i < s.size();i++)
            {
                tmp += s[i];
                if (tmp.find("zero") != -1) ans += '0', tmp.clear();
                if (tmp.find("two") != -1) ans += '2', tmp.clear();
                if (tmp.find("four") != -1) ans += '4', tmp.clear();
                if (tmp.find("six") != -1) ans += '6', tmp.clear();
                if (tmp.find("nine") != -1) ans += '9', tmp.clear();
                if (s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '9')
                    ans += s[i];
            }
            cout << ans << endl;
        }
        return 0;
    }





#include<bits/stdc++.h>
    using namespace std;
    int a[10];
    bool check1 = 1, check2 = 0, check = 1;
    vector<int> ans;
    int main() {
        for (int i = 0;i < 10;i++)cin >> a[i];

        int cnt = 0;//记录奇数个的数的个数
        for (int i = 0;i < 10;i++) { if (a[i] & 1) cnt++; }
        if (cnt > 1)check = false;

        if (a[0] >= 2) {
            int sum = 0;
            for (int i = 0;i < 10;i++) { sum += a[i]; }
            if (a[0] + 1 == sum || a[0] == sum) {
                printf("-1");
                return 0;
            }
        }
        if (check) {
            int ji = -1;
            for (int i = 0;i < 10;i++)if (a[i] & 1) { ji = i;break; }
            for (int i = 1;i < 10;i++) {
                if (a[i] >= 2) {
                    ans.push_back(i);
                    a[i] -= 2;
                    break;
                }
            }
            for (int i = 0;i < 10;i++) {
                while (a[i] >= 2)ans.push_back(i), a[i] -= 2;
            }
            for (int i = 0;i < ans.size();i++)cout << ans[i];
            if (ji != -1)cout << ji;
            for (int i = ans.size() - 1;i >= 0;i--)cout << ans[i];
        }
        else printf("-1");
        return 0;
    }
#include<bits/stdc++.h>
    using namespace std;
    const int n = 20010905;
    char c;
    int dp[8];
    int main()
    {
        string s;
        cin >> s;
        for (int i = 0;i < s.size();i++)
        {
            c = tolower(s[i]);
            if (c == 'i') dp[0]++;
            if (c == 'l') dp[1] = (dp[0] + dp[1]) % n;
            if (c == 'o') dp[2] = (dp[2] + dp[1]) % n;
            if (c == 'v') dp[3] = (dp[3] + dp[2]) % n;
            if (c == 'e') dp[4] = (dp[4] + dp[3]) % n;
            if (c == 'y') dp[5] = (dp[5] + dp[4]) % n;
            if (c == 'o') dp[6] = (dp[6] + dp[5]) % n;
            if (c == 'u') dp[7] = (dp[7] + dp[6]) % n;
        }
        cout << dp[7] % n;
        return 0;
    }#include<bits/stdc++.h>
        using namespace std;
    int a[40][40];
    pair<int, int>pos;
    int main()
    {
        int n;
        cin >> n;
        a[1][(1 + n) / 2] = 1;
        pos = { 1,(1 + n) / 2 };
        for (int i = 2;i <= n * n;i++)
        {
            if (pos.first == 1 && pos.second != n)
            {
                a[n][pos.second + 1] = i;
                pos = { n,pos.second + 1 };
            }
            else if (pos.second == n && pos.first != 1)
            {
                a[pos.first - 1][1] = i;
                pos = { pos.first - 1,1 };
            }
            else if (pos.first == 1 && pos.second == n)
            {
                a[pos.first + 1][pos.second] = i;
                pos = { pos.first + 1,pos.second };
            }
            else
            {
                if (a[pos.first - 1][pos.second + 1] == 0)
                {
                    a[pos.first - 1][pos.second + 1] = i;
                    pos = { pos.first - 1,pos.second + 1 };
                }
                else
                {
                    a[pos.first + 1][pos.second] = i;
                    pos = { pos.first + 1,pos.second };
                }
            }
        }
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= n;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }#include<bits/stdc++.h>
        using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            char a[4][4];
            for (int i = 1;i <= 3;i++)
            {
                for (int j = 1;j <= 3;j++)
                {
                    cin >> a[i][j];
                }
            }
            bool flag1 = false, flag2 = false;
            for (int i = 1;i <= 3;i++)
            {
                if (a[i][3] == a[i][1] && a[i][1] == a[i][2])
                {
                    if (a[i][1] == 'A')
                        flag1 = true;
                    else if (a[i][1] == 'B')
                        flag2 = true;
                }
            }
            for (int i = 1;i <= 3;i++)
            {
                if (a[3][i] == a[1][i] && a[1][i] == a[2][i])
                {
                    if (a[1][i] == 'A')
                        flag1 = true;
                    else if (a[1][i] == 'B')
                        flag2 = true;
                }
            }
            for (int i = 1;i <= 3;i++)
            {
                if (a[3][3] == a[1][1] && a[1][1] == a[2][2])
                {
                    if (a[1][1] == 'A')
                        flag1 = true;
                    else if (a[1][1] == 'B')
                        flag2 = true;
                }
            }
            for (int i = 1;i <= 3;i++)
            {
                if (a[3][1] == a[2][2] && a[2][2] == a[1][3])
                {
                    if (a[2][2] == 'A')
                        flag1 = true;
                    else if (a[2][2] == 'B')
                        flag2 = true;
                }
            }
            if (flag1 && flag2)
                cout << "invalid" << endl;
            else if (flag1)
                cout << "Yes" << endl;
            else if (flag2)
                cout << "No" << endl;
            else
                cout << "draw" << endl;
        }
        return 0;
    }
