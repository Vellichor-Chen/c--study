#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);
    return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n)
    {
        printf("%d", n % 10);
        n = n / 10;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    scanf("%d %d", &a, &b);
    sum = (a + b) % 100;
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", n % 10);
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    scanf("%d", &i);
    long long second = i * 3.156e7;
    printf("%lld", second);
    return 0;
}
#include<stdio.h>
int main()
{
    int weight = 0;
    int high = 0;
    double bmi = 0.0;
    scanf("%d %d", &weight, &high);
    bmi = weight / (high / 100.0) / (high / 100.0);
    printf("%.2lf", bmi);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double circumference = 0.0;
    double area = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);
    circumference = a + b + c;
    double p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2lf area=%.2lf", circumference, area);
    return 0;
}
#include<stdio.h>
int main()
{
    double r = 0.0;
    double v = 0.0;
    double pai = 3.1415926;
    scanf("%lf", &r);
    v = 4.0 / 3 * pai * r * r * r;
    printf("%.3lf", v);
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    while ((i = getchar()) != EOF)
    {
        printf("%c\n", i + 32);
        getchar();
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d", 1 << n);
    }

    return 0;
}