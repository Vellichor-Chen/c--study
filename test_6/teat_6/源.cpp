#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int y = 0;
    int m = 0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        while (~scanf("%d %d", &y, &m))
        {
            int day = days[m - 1];
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            {
                if (m == 2)
                {
                    day += 1;
                }
            }
            printf("%d\n", day);
        }
    return 0;
}
#include<stdio.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    char o = 0;
    while (~scanf("%lf%c%lf", &a, &o, &b))
    {
        switch (o)
        {
        case '+':
            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0.0)
            {
                printf("Wrong!Division by zero!\n");
            }
            else
                printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
            break;
        default:
            printf("Invalid operation!");
            break;


        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0;i < n;i++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
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
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j <= i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j < n - i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j < n - i - 1;j++)
            {
                printf("  ");
            }
            int z = 0;
            for (z = 0;z <= i;z++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j < n - i - 1;j++)
            {
                printf(" ");
            }
            int z = 0;
            for (z = 0;z <= i;z++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j < i;j++)
            {
                printf(" ");
            }
            int z = 0;
            for (z = 0;z <= n - 1 - i;z++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
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
            for (j = 0;j < n - i;j++)
            {
                printf(" ");
            }
            int z = 0;
            for (z = 0;z <= i;z++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0;i < n + 1;i++)
        {
            int q = 0;
            for (q = 0;q < i;q++)
            {
                printf(" ");
            }
            int p = 0;
            for (p = 0;p < n + 1 - i;p++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}
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
            for (j = 0;j < n + 1 - i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0;i < n + 1;i++)
        {
            int q = 0;
            for (q = 0;q < i + 1;q++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}
