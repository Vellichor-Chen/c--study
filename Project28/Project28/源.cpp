#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.��s1�ַ�����׷��һ��s1���ַ���
//	//strcat(s1, s1);���Լ�׷�Ӳ���
//	strncat(s1, s1, 6);
//	//2.�ж�s2ָ����ַ����Ƿ���s1ָ���ַ������ִ�
//	char*ret = strstr(s1, s2);//����һ��ָ��
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//

//
//int FindNum(int arr[3][3], int k, int ro, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	if (arr[x][y - 1] > k)
//	{
//		y--;
//	}
//	else if (arr[x][y - 1] < k)
//	{
//		x++;
//	}
//	else 
//	{
//
//		return 1;
//	}
//	return 0;
//}

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ�\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0');
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	//int len = strlen("abcdef");
	//char arr[] = { 'a','b','c','d','e','f' };
	//int len = strlen(arr);

	/*int len = my_strlen("abcdef");
	printf("%d\n", len);*/

	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("haha\n");
	}
	else
	{
		printf("hehe\n");
	}
	return 0;
}




