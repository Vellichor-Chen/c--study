#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    h = seconds / 3600;
//    m = seconds % 3600 / 60;
//    s = seconds % 3600 % 60;
//    printf("%d %d %d", h, m, s);
//    return 0;
//}
//#include<stdio.h>
///*int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    printf("%.2lf %.2lf",a+b+c,(a+b+c)/3);
//    return 0;
//}*/
///*
//int mian()
//{
//    double score[3] = {0};
//    scanf("%lf %lf %lf",&score[0],&score[1],&score[3]);
//    ...
//    return 0;
//}*/
//int main()
//{
//    double score = 0.0;
//    double sum = 0.0;
//    int i = 0;
//    for (i = 0;i < 3;i++)
//    {
//        scanf("%lf ", &score);
//        sum += score;
//    }
//    printf("%.2lf %.2lf", sum, sum / 3.0);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    int e = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        if (m % h == 0)
//        {
//            e = n - m / h;
//        }
//        else
//        {
//            e = n - (m / h + 1);
//        }
//    }
//    printf("%d ", e);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("I lost my cellphone!");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int sum = 0;
//    int score = 0;
//    int i = 0;
//    for (i = 0;i < 5;i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//    }
//    printf("%.1f", sum / 5.0);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    int sum = a + b;
//    printf("%d\n", sum);
//    return 0;
//    
//}
//#include<stdio.h>
///*int main()
//{
//    int ch = 0;
//    while((ch = getchar())!=EOF)
//    {
//        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//    }
//    return 0;
//}*/
//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (isalpha(ch))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 10000;i <= 99999;i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 10;j <= 10000;j *= 10)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    double discount = 1.0;
//    double last = 0.0;
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        discount = 0.7;
//            if (flag == 1)
//            {
//                last = price * discount - 50;
//            }
//            else
//            {
//                last = price * discount;
//            }
//    }
//    else if (month == 12 && day == 12)
//    {
//        discount = 0.8;
//        if (flag == 1)
//        {
//            last = price * discount - 50;
//        }
//        else
//        {
//            last = price * discount;
//        }
//    }
//    if (last <= 0.0)
//    {
//        printf("%.2lf", 0.0);
//    }
//    else
//    {
//        printf("%.2lf", last);
//    }
//    return 0;
//}
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    double last = 0.0;
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//
//        price *= 0.7;
//        if (flag == 1)
//        {
//            price -= 50;
//        }
//
//    }
//    else if (month == 12 && day == 12)
//    {
//
//        price *= 0.8;
//        if (flag == 1)
//        {
//            price -= 50;
//        }
//
//    }
//    if (price <= 0.0)
//    {
//        printf("%.2lf", 0.0);
//    }
//    else
//    {
//        printf("%.2lf", price);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[40] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //Ã°ÅÝÅÅÐò-ÉýÐò
    for (i = 0; i < n - 1; i++)//ÌËÊý
    {
        int j = 0;
        for (j = 0; j < n - 1 - i; j++)//½»»»´ÎÊý
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = n - 1;i >= n - 5;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    int n = 0;

    int arr[40] = { 0 };

    scanf("%d", &n);
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //Ã°ÅÝÅÅÐò-ÉýÐò
    qsort(arr, n, 4, cmp_int);
    for (i = n - 1;i >= n - 5;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
}