#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets_s(arr);
//	reverse(arr);
//	printf("逆序后的字符串内容是:%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0 ;i < n ;i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//计算i的位数
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10 )
//		{
//			n++;
//		}
//		//计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < line - 1;i++)
//	{
//		//printf(" ");
//		int j = 0;
//		for (j = 0;j <= i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * (line - 1 - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j < 10;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int killer = 0;
	for (killer = 'a';killer <= 'd';killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer = %c\n", killer);
		}
	}
	return 0;
}