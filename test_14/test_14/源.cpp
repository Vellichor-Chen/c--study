#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100001] = { 0 };
    int i = 0;
    int tmp = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }
    for (i = 0;i < n;i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char arr[8000] = { 0 };
    scanf("%s", &arr);
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    char* p = arr;
    while (*p)
    {
        if (*p == 'C')
        {
            c++;
        }
        else if (*p == 'H')
        {
            ch += c;
        }
        else if (*p == 'N')
        {
            chn += ch;
        }
        p++;
    }
    printf("%lld\n", chn);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    if (max < d)
    {
        max = d;
    }
    printf("%d", max);
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n >= 90 && n <= 100)
    {
        printf("A");
    }
    else if (n < 90 && n >= 80)
    {
        printf("B");
    }
    else if (n < 80 && n >= 70)
    {
        printf("C");
    }
    else if (n < 70 && n >= 60)
    {
        printf("D");
    }
    else if (n < 60 && n >= 0)
    {
        printf("E");
    }
    else

        printf("F");
    return 0;
}
#include<stdio.h>
int max3(int a, int b, int c)
{
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return max;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float m = 0;
    m = ((float)max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%.2f", m);
    return 0;
}
