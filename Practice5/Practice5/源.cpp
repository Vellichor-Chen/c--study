#define  _CRT_SECURE_NO_WARNINGS 1
//2024
//字符串条件：1首字母为A-Z或a-z或"_",不能为数字
//2.其可为0到9
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main()
//{
//	int n = 0;
//	char str[55];
//
//	while (~scanf("%d", &n))
//	{
//		getchar();
//		while (n--)
//		{
//			int flag = 0;
//			gets_s(str);//不用吸收换行符
//			int len = strlen(str);
//			if ((str[0] == '_') || isalpha(str[0])!=0)
//			{
//				for (int i = 1;i < len;i++)
//				{
//					if ((str[i] == '_') || isalpha(str[i])!=0 || isdigit(str[i])!=0)
//					{
//						continue;
//					}
//					else
//					{
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 0)
//				{
//					puts("yes");
//				}
//				else
//				{
//					puts("no");
//				}
//			}
//			else
//			{
//				puts("no");
//			}
//		}
//	}
//	return 0;
//}
// 
// 
// AC
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<ctype.h>
//int main()
//{
//	int n = 0;
//	char str[55];
//	scanf("%d", &n);
//		getchar();
//		while (n--)
//		{
//			int flag = 0;
//			gets_s(str);//不用吸收换行符
//			int len = strlen(str);
//			if ((str[0] == '_') || isalpha(str[0]) != 0)
//			{
//				for (int i = 1;i < len;i++)
//				{
//					if ((str[i] == '_') || isalpha(str[i]) != 0 || isdigit(str[i]) != 0)
//					{
//						continue;
//					}
//					else
//					{
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 0)
//				{
//					puts("yes");
//				}
//				else
//				{
//					puts("no");
//				}
//			}
//			else
//			{
//				puts("no");
//			}
//		}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	char str[55];
//	int flag = 0;
//	scanf("%d", &n);
//	getchar();
//		while (n--)
//		{
//			gets_s(str);//不用吸收换行符
//			int len = strlen(str);
//			if ((str[0] == '_') || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
//			{
//				for (int i = 1;i < len;i++)
//				{
//					if ((str[i] == '_') || (str[i] >= 'A' && str[i] >= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
//					{
//						continue;
//					}
//					else
//					{
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 0)
//				{
//					puts("yes");
//				}
//				else
//				{
//					puts("no");
//				}
//			}
//			else
//			{
//				puts("no");
//			}
//		}
//	return 0;
//}


//2025
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1000] = { 0 };
//	int x = 0;
//	int i = 0;
//	char max;
//	int arr[1000] = { 0 };
//	while (~scanf("%s",str))
//	{
//		max = '\0';
//		for (i = 0;i<strlen(str);i++)
//		{
//			if (str[i] > max)
//			{
//				x = 0;
//				max = str[i];
//				arr[0] = i;
//			}
//			else if (str[i] == max)
//			{
//				arr[++x] = i;
//			}
//		}
//		int j = 0;
//		for (i = 0;i < strlen(str);i++)
//		{
//			printf("%c", str[i]);
//			if (i == arr[j])
//			{
//				printf("(max)");
//				j++;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//AC
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1000] = { 0 };
//	int i = 0;
//	char max;
//	int arr[1000] = { 0 };
//	while (~scanf("%s",str))
//	{
//		max = '\0';
//		for (i = 0;str[i];i++)
//		{
//			if (str[i] > max)
//			{
//				max = str[i];
//			}
//		}
//		for (i = 0;str[i];i++)
//		{
//			printf("%c", str[i]);
//			if (str[i]==max)
//			{
//				printf("(max)");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//2026
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//	char s[200];
//	while (gets_s(s))
//	{
//		int i = 0;
//		int len = strlen(s);
//		for (i = 0;i < len;i++)
//		{
//			if (i == 0)
//			{
//				s[i] = toupper(s[i]);
//			}
//			else
//			{
//				if (s[i] == ' ')
//				{
//					s[i+1] = toupper(s[i + 1]);
//				}
//			}
//		}
//		printf("%s",s);
//		printf("\n");
//	}
//	return 0;
//}



//2027
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n;
//	char s[1000];
//	int n1, n2, n3, n4, n5;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		getchar();
//		while (n--)
//		{
//			n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
//			gets_s(s);
//			for (i = 0;i < strlen(s);i++)
//			{
//				if (s[i] == 'a')n1++;
//				else if (s[i] == 'e')n2++;
//				else if (s[i] == 'i')n3++;
//				else if (s[i] == 'o')n4++;
//				else if (s[i] == 'u')n5++;
//			}
//			if (n != 0)
//			{
//				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n", n1, n2, n3, n4, n5);
//			}
//			else
//			{
//				printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", n1, n2, n3, n4, n5);
//
//			}
//		}
//	}
//	return 0;
//}


//2028
//辗转相除法
//min = a*b/max;
//#include<stdio.h>
//int lcm(int x, int t)
//{
//	int a = x;
//	int b = t;
//	int r = 0;
//	while (t > 0)
//	{
//		r = x % t;
//		x = t;
//		t = r;
//	}
//	return a / x * b;
//}
//int main()
//{
//	int n ,i,t;
//	while (~scanf("%d",&n))
//	{
//		int x = 1;
//		for (i = 1;i <= n;i++)
//		{
//			scanf("%d", &t);
//			x = lcm(x, t);//least common multiple
//		}
//		printf("%d\n", x);
//	}
//	return 0;
//}
//


//2029
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	char s[1000] = { 0 };
//	while (~scanf("%d", &n))
//	{
//		getchar();
//		while (n--)
//		{
//			scanf("%s", s);
//			int i = 0;
//			int flag = 1;
//			int c = 0;
//			int len = strlen(s);
//			for (i = 0;i < len/2;i++)
//			{
//				if (s[i] != s[len - 1 - i])
//				{
//					printf("no\n");
//					break;
//				}
//				else
//				{
//					c++;
//				}
//				if(c==len/2)
//				printf("yes\n");
//			}
//		}
//	}
//}


