#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float arr[5][6] = { 0 };
    int i = 0;
    for (i = 0;i < 5;i++)
    {
        int j = 0;
        for (j = 0;j < 5;j++)
        {
            scanf("%f ", &arr[i][j]);
        }
    }
    for (i = 0;i < 5;i++)
    {
        arr[i][5] = (arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4]);
        printf("%.1f %.1f %.1f %.1f %.1f %.1f\n"
            , arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]
            , arr[i][5]);
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
    for (i = 0;i < n;i++)
    {
        int j = 0;
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%d", arr[x - 1][y - 1]);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr[100] = { 0 };
    int  i = 0;
    for (i = 0;i < n * m;i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0;i < n * m;i++)
    {
        printf("%d ", arr[i]);
        if ((i + 1) % m == 0)
        {
            printf("\n");
        }

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
    int x = 0;
    int y = 0;
    for (i = 0;i < n;i++)
    {
        int j = 0;
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &arr[i][j]);
            if (arr[i][j] > arr[x][y])
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d", x + 1, y + 1);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n][m];
    int arr2[n][m];
    int i = 0;
    int j = 0;
    int count = 1;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            scanf("%d ", &arr2[i][j]);
            if (arr1[i][j] != arr2[i][j])
            {
                count = 0;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10][10] = { 0 };
    int i, j = 0;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n;j++)
        {
            scanf("%d ", &arr[i][j]);
        }
    }
    int flag = 1;
    for (i = 1;i < n;i++)
    {
        for (j = 0;j < i;j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
