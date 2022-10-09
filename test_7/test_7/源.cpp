#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
///*
//    *
//  **
//***
//  **
//    *
//*/
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0;j < n - i;j++)
//            {
//                printf("  ");
//            }
//            for (j = 0;j <=i;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0;i < n + 1;i++)
//        {
//            int q = 0;
//            for (q = 0;q < i;q++)
//            {
//                printf("  ");
//            }
//            for (q = 0;q < n + 1 - i;q++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0;j < i;j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0;j < n - 1 - i;j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0;j < n;j++)
//            {
//                if (i == j)
//                {
//                    printf("*");
//                }
//                else if (i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0;j < n;j++)
//            {
//                if (i == 0 || i == n - 1)
//                {
//                    printf("* ");
//                }
//                else if (j == 0 || j == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0;i < n;i++)
        {
            int j = 0;
            for (j = 0;j < n;j++)
            {
                if (j == 0 || i == n - 1)
                {
                    printf("* ");
                }
                else if (i == j)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("Happy New Year*2019*\n");
    return 0;
}
#include<stdio.h>
int main()
{
    double arr[5] = { 0 };
    int i = 0;
    for (i = 0;i < 5;i++)
    {
        scanf("%lf ", &arr[i]);
    }
    printf("%.2lf", (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5);
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    if (i >= 0 && i <= 3)
    {
        printf("Good\n");
    }
    else if (i >= 4 && i <= 9)
    {
        printf("Danger\n");
    }
    else
    {
        printf("Danger++\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        switch (n)
        {
        case 200:printf("OK\n");break;
        case 202:printf("Accepted\n");break;
        case 400:printf("Bad Request\n");break;
        case 403:printf("Forbidden\n");break;
        case 404:printf("Not Found\n");break;
        case 500:printf("Internal Server Error\n");break;
        case 502:printf("Bad Gateway\n");break;
        default:break;
        }

    }
    return  0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 1;
        for (i = 1;i <= n;i++)
        {
            int j = 0;
            for (j = 1;j <= i;j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }


    }
    return 0;
}