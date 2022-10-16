#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[40] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//    }
//    for (i--;i >= 0;i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    int i = 0;
//    for (i = 1;i <= n;i++)
//    {
//        sum += i;
//    }
//    printf("%lld", sum);
//    return 0;
//}
//int main()
//{
//    long long n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    sum = (n * (n + 1)) / 2;
//    printf("%lld", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    h = ((m + k) / 60 + h) % 24;
//    m = (m + k) % 60;
//    printf("%02d:%02d\n", h, m);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long sum = 0;
//    sum = n / 12 * 4 + 2;
//    printf("%lld", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    long long max = 0;
    max = n > m ? m : n;
    long long min = 0;
    min = n > m ? n : m;
    while (1)
    {
        if (n % max == 0 && m % max == 0)
        {
            break;
        }
        max--;
    }
    while (1)
    {
        if (min % n == 0 && min % m == 0)
        {
            break;
        }
        min++;
    }
    printf("%lld\n", max + min);
    return 0;
}
#include<stdio.h>
int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    long long i = n * m;
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;
    min = i / max;
    printf("%lld", max + min);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    long long n = 0;
    scanf("%lld", &n);
    int i = 0;
    int sum = 0;
    while (n)
    {
        int m = n % 10;
        if (m % 2 == 1)
        {
            m = 1;
        }
        else
        {
            m = 0;
        }
        sum += m * pow(10, i);
        i++;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
