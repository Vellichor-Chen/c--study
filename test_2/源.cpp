#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("score1=%d,score2=%d,score3=%d", a, b, c);
    return 0;
}
#include<stdio.h>
int main()
{
    int num = 0;
    float c = 0;
    float math = 0;
    float eng = 0;
    scanf("%d;%f,%f,%f", &num, &c, &math, &eng);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, c, math, eng);
    return 0;
}

#include<stdio.h>
int main()
{
    char ch = 0;
    ch = getchar();
    int i = 0;
    for (i = 0;i < 5;i++)
    {
        int j = 0;
        for (j = 0;j < 4 - i;j++)
        {
            printf(" ");
        }
        for (j = 0;j < 1 + i;j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
#include<stdio.h>
    int main()
    {
        char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
        int i = 0;
        int sz = sizeof(arr) / sizeof(arr[0]);
        for (i = 0;i < sz; i++)
        {
            printf("%c", arr[i]);
        }
        return 0;
    }
}
#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);
    printf("year=%4d\n", year);
    printf("month=%02d\n", month);
    printf("date=%02d\n", date);

    return 0;
}
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("a=%d,b=%d", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d,b=%d", a, b);
    return 0;
}
#include<stdio.h>
int main()
{
    char ch = 0;
    ch = getchar();
    printf("%d", ch);
    return 0;
}
#include<stdio.h>
int main()
{
    int a = 40;
    int c = 212;
    printf("%d", (-8 + 22) * a - 10 + c / 2);
    return 0;
}