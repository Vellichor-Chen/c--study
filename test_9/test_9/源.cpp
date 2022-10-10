#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (a + b - c) * d);
    return 0;
}
#include<stdio.h>
int main()
{
    int m = 0;
    scanf("%d", &m);
    if (m % 5 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("1\n");
    }
    else if (n == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    double arr[5] = { 0 };
    scanf("%d\n", &n);
    int i = 0;
    for (i = 0;i < 5;i++)
    {
        scanf("%lf ", &arr[i]);
    }
    double max = arr[0];
    double min = arr[0];
    for (i = 0;i < 5;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%.2lf %.2lf %.2lf", max, min, (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / n);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[51] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    int m = 0;
    scanf("\n%d\n", &m);
    int j = 0;
    for (j = n - 1;j >= 0;j--)
    {
        if (m < arr[j])
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            arr[j + 1] = m;
            break;
        }
    }
    if (j < 0)
    {
        arr[0] = m;
    }
    for (i = 0;i <= n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<string.h>
#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s %s", &s1, &s2);
    if (strcmp(s1, s2) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int num = 0;
    int sum = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0;i < n;i++)
    {
        int j = 0;
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &num);
            if (num > 0)
            {
                sum += num;
            }
        }
    }
    printf("%d ", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0;i < 10;i++)
    {
        scanf("%d ", &arr[i]);
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0;i < 10;i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 9;i >= 0;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0;i < 10;i++)
    {
        scanf("%d ", &arr[i]);
    }
    int p = 0;
    int n = 0;
    for (i = 0;i < 10;i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else if (arr[i] < 0)
        {
            n++;
        }
    }
    printf("positive:%d\n", p);
    printf("negative:%d\n", n);
    return 0;
}