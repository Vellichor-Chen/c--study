#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 2 == 0 && n != 2) puts("YES");
//	else puts("NO");
//}


//#include<iostream>
//#include<string.h>
//#include<string.h>
//using namespace std;
//int n;
//string s;
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		cin >> s;
//		if (s.size() > 10)
//		{
//			cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
//		}
//		else
//		{
//			for (int i = 0;i < s.size();i++) cout << s[i];
//			cout << endl;
//		}
//	}
//}



//#include<stdio.h>
//int a[100];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//		scanf("%d", &a[i]);
//	for (int i = 0;i < n - 1;i++)
//		for (int j = 0;j < n - i - 1;j++)
//			if (a[j] > a[j+1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//	for (int i = 0;i < n;i++) printf("%d", a[i]);
//	return 0;
//}




//#include<stdio.h>
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int res = gcd(a, b);
//	printf("%d\n", res);
//	printf("%d\n", a * b / res);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 100, b = 10;
//	int* p1, * p2;
//	p1 = &a, p2 = &b;
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", *p1, *p2);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int* p1, * p2, * p, a, b;
//	scanf("%d%d", &a, &b);
//	p1 = &a, p2 = &b;
//	if (a < b)
//	{
//		p = p1, p1 = p2, p2 = p;
//	}
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", *p1, *p2);
//	return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	void swap(int* p1, int* p2);
//	int a, b;
//	int* p1, * p2;
//	scanf("%d%d", &a, &b);
//	p1 = &a, p2 = &b;
//	if (a < b)
//		swap(p1, p2);
//	printf("%d %d", *p1, *p2);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp; 
//}



//#include<stdio.h>
//int main()
//{
//	void swap(int* p1, int* p2);
//	int a, b;
//	int* p1, * p2;
//	scanf("%d%d", &a, &b);
//	p1 = &a, p2 = &b;
//	if (a < b) swap(p1, p2);
//	printf("%d %d\n", *p1, *p2);
//}
//void swap(int* p1, int* p2)
//{
//	int* p;
//	p = p1;
//	p1 = p2;
//	p2 = p;






//#include<stdio.h>
//int main()
//{
//	void exchange(int* p1, int* p2, int* p3);
//	int a, b, c, * p1, * p2, * p3;
//	scanf("%d%d%d", &a, &b, &c);
//	p1 = &a, p2 = &b, p3 = &c;
//	exchange(p1, p2, p3);
//	printf("%d %d %d\n", a, b, c);
//}
//void exchange(int* p1, int* p2, int* p3)
//{
//	void swap(int* p1, int* p2);
//	if (*p1 < *p2) swap(p1, p2);
//	if (*p1 < *p3) swap(p1, p3);
//	if (*p2 < *p3) swap(p2, p3);
//}
//void swap(int* p1, int* p2)
//{
//	int tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}



//#include<stdio.h>
//int main()
//{
//	int a[10];
//	for (int i = 0;i < 10;i++) scanf("%d", &a[i]);
//	for (int i = 0;i < 10;i++) printf("%d ", * (a + i));
//	printf("\n");
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int* p;
//	for (int i = 0;i < 10;i++) scanf("%d", &a[i]);
//	for (p = a;p < (a + 10);p++) printf("%d ", *p);
//	printf("\n");
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int* p, a[10];
//	p = a;
//	for (int i = 0;i < 10;i++) scanf("%d", &a[i]);
//	for (int i = 0;i < 10;i++, p++) printf("%d ", *p);
//	printf("\n");
//	return 0;
//}
// 
// 
// 
// 
//#include<stdio.h>
//int main()
//{
//	void inv(int x[], int n);
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (int i = 0;i < 10;i++) printf("%d ",a[i]);
//	printf("\n");
//	inv(a, 10);
//	for (int i = 0;i < 10;i++) printf("%d ", a[i]);
//	return 0;
//}
//void inv(int x[],int n)
//{
//	int tmp, m = (n - 1) / 2;
//	for (int i = 0;i <= m;i++)
//	{
//		int j = n - i - 1;
//		tmp = x[i], x[i] = x[j], x[j] = tmp;
//	}
//}


//
//#include<stdio.h>
//int main()
//{
//	void inv(int* x, int n);
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0;i < 10;i++) printf("%d ", a[i]);
//	printf("\n");
//	inv(a, 10);
//	for (int i = 0;i < 10;i++) printf("%d ", a[i]);
//	return 0;
//}
//void inv(int* x, int n)
//{
//	int* p, * i, * j, tmp, m = (n - 1) / 2;
//	i = x, j = x + n - 1, p = x + m;
//	for (;i <= p;i++, j--)
//	{
//		tmp = *i;
//		*i = *j;
//		*j = tmp;
//	}
//}




//#include<stdio.h>
//int main()
//{
//	void sort(int x[], int n);
//	int* p, i, a[10];
//	p = a;
//	for (int i = 0;i < 10;i++) scanf("%d", p++);
//	p = a;
//	sort(a, 10);
//	for (p = a, i = 0;i < 10;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int x[], int n)
//{
//	for(int i=0;i<n-1;i++)
//		for (int j = 0;j < n - i - 1;j++)
//		{
//			if (x[j] < x[j + 1])
//			{
//				int t = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = t;
//			}
//		}
//}]



//#include<stdio.h>
//int main()
//{
//	int a, b, c,tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) tmp = a, a = b, b = tmp;
//	if (a > c) tmp = a, a = c, c = tmp;
//	if (b > c) tmp = b, b = c, c = tmp;
//	printf("%d %d %d", a, b, c);
//}