#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    while (~scanf("%d %d %d %d %d %d %d",
//        &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]))
//    {
//        int max = arr[0];
//        int min = arr[0];
//        int sum = 0;
//        int i = 0;
//        for (i = 0;i < 7;i++)
//        {
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//            if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//            sum += arr[i];
//
//        }
//
//        printf("%.2f\n", (sum - max - min) / 5.0);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d\n", &N);
//    int arr[51] = { 0 };
//    int i = 0;
//    for (i = 0;i < N;i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    int m = 0;
//    scanf("\n%d", &m);
//    for (i = N - 1;i >= 0;i--)
//    {
//        if (m < arr[i])
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if (i < 0)
//    {
//        arr[0] = m;
//    }
//    for (i = 0;i <= N;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    while (~scanf("%d", &n))
//    {
//        int arr[101];
//        int i = 0;
//        for (i = 2;i <= n;i++)
//        {
//            arr[i] = i;
//        }
//        int j = 0;
//        for (j = 2;j <= n;j++)
//        {
//            int k = 0;
//            for (k = j + 1;k <= n;k++)
//            {
//
//                if (arr[k] % j == 0)
//                {
//                    arr[k] = 0;
//                }
//            }
//        }
//        for (i = 2;i <= n;i++)
//        {
//            if (arr[i] != 0)
//            {
//                printf("%d ", arr[i]);
//            }
//            else
//            {
//                count++;
//            }
//        }
//        printf("\n%d", count);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 2;i <= n;i++)
//        {
//            int j = 0;
//            for (j = 2;j < i;j++)
//            {
//                if (i % j == 0)
//                {
//                    count++;
//                    break;
//                }
//            }
//            if (i == j)
//            {
//                printf("%d ", i);
//            }
//
//        }
//        printf("\n%d", count);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0;i < m;i++)
//    {
//        for (j = 0;j < n;j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0;i < m;i++)
//    {
//        for (j = 0;j < n;j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    for (i = 0;i < m;i++)
//    {
//        for (j = 0;j < n;j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2f\n", 100.0 * count / (m * n));
//    return 0;
//}
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] = { 0 };
    char str2[100] = { 0 };
    while (~scanf("%s %s", &str1, &str2))
    {
        if (strcmp(str1, "admin") == 0 && strcmp(str2, "admin") == 0)
        {
            printf("Login Success!\n");
        }
        else
        {
            printf("Login Fail!\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("I will learn C++ well!\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 1;i <= 2019;i++)
    {
        int m = i;
        while (m)
        {
            if (m % 10 == 9)
            {
                count++;
                break;
            }
            m /= 10;
        }
    }
    printf("%d", count);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int odd = 0;
    for (i = 1;i <= n;i++)
    {
        if (i % 2 == 1)
        {
            odd++;
        }
    }
    printf("%d %d", odd, n - odd);
    return 0;
}
