#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char buf[100] = { 0 };
    gets(buf);
    int i = 0;
    int count_a = 0;
    int count_b = 0;
    while (buf[i] != '0')
    {
        if (buf[i] == 'A')
        {
            count_a++;
        }
        else if (buf[i] == 'B')
        {
            count_b++;
        }
        i++;
    }
    if (count_a > count_b)
        printf("A");
    else if (count_a < count_b)
        printf("B");
    else
        printf("E");

    return 0;
}
int main()
{
    char arr[100] = { 0 };
    gets(arr);
    int i = 0;
    int flag = 0;
    while (arr[i] != '0')
    {
        if (arr[i] == 'A')
        {
            flag++;
        }
        else if (arr[i] == 'B')
        {
            flag--;
        }
        i++;
    }
    if (flag > 0)
        printf("A");
    else if (flag < 0)
        printf("B");
    else
        printf("E");
    return 0;
}
int main()
{
    int ch = 0;
    int flag = 0;
    while (((ch = getchar()) != '0') && ch != EOF)
    {
        if (ch == 'A')
        {
            flag++;
        }
        else if (ch == 'B')
        {
            flag--;
        }
    }
    if (flag > 0)
        printf("A");
    else if (flag < 0)
        printf("B");
    else
        printf("E");
    return 0;
}

#include<stdio.h>
int main()
{
    int iq = 0;
    //多组输入
    while (scanf("%d", &iq) != EOF)
    {
        if (iq >= 140)
            printf("Genius");

    }
    return 0;
}
int main()
{
    int iq = 0;
    //多组输入
    while (~scanf("%d", &iq))
    {
        if (iq >= 140)
            printf("Genius");

    }
    return 0;
}
#include<stdio.h>
int main()
{
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 90 && score <= 100)
        {
            printf("Perfect");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int score = 0;
    while (~scanf("%d", &score))
    {
        if (score >= 60)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i = 0;
    while (~scanf("%d", &i))
    {
        if (i % 2 == 1)
        {
            printf("Odd\n");
        }
        else
        {
            printf("Even\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int max = a > b ? a : b;
    max = max > c ? max : c;
    printf("%d", max);

    return 0;
}
