#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int arr[10][10];
    int i = 0;
    int j = 0;
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    int k = 0;
    scanf("%d ", &k);
    char t = 0;
    int a = 0;
    int b = 0;
    for (i = 0;i < k;i++)
    {
        scanf(" %c %d %d", &t, &a, &b);
        if (t == 'r')
        {
            for (j = 0;j < m;j++)
            {
                int tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        else if (t == 'c')
        {
            for (j = 0;j < n;j++)
            {
                int tmp = arr[j][a - 1];
                arr[j][a - 1] = arr[j][b - 1];
                arr[j][b - 1] = tmp;
            }
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    int arr[30][30] = { 0 };
    for (i = 0;i < n;i++)
    {
        for (j = 0;j <= i;j++)
        {
            if (i == j)
            {
                arr[i][j] = 1;
            }
            else if (j == 0)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j <= i;j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
#include <stdio.h>
int main()
{
    char arr[3][3] = { 0 };
    int i = 0;
    int j = 0;
    char flag = 'c';
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%c", &arr[i][j]);
            getchar();
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            flag = arr[i][1];
            break;
        }
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            flag = arr[1][i];
            break;
        }
    }

    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
    {
        flag = arr[1][1];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
    {
        flag = arr[1][1];
    }

    if (flag == 'K')
        printf("KiKi wins!");
    else if (flag == 'B')
        printf("BoBo wins!");
    else
        printf("No winner!");

    return 0;
}