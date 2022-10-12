#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int sum = 0;
    int num = 0;
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d ", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[10000] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (i = 0;i < n;i++)
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
    printf("%d", max - min);
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    int flag1 = 0;
    int flag2 = 0;
    for (i = 0;i < n - 1;i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            flag1++;
        }
        else
        {
            flag2++;
        }
    }
    if (flag1 == (n - 1) || flag2 == (n - 1))
    {
        printf("sorted\n");
    }
    else
    {
        printf("unsorted\n");
    }
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
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("\n%d", &m);
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
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("\n%d", &m);
    int j = 0;
    for (i = 0;i < n;i++)
    {
        if (arr[i] != m)
        {
            arr[j++] = arr[i];
        }
    }
    for (i = 0;i < j;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[1000] = { 0 };
    int i = 0;
    for (i = 0;i < n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0;i < n;i++)
    {
        int j = 0;
        for (j = i + 1;j < n;j++)
        {
            if (arr[j] == arr[i])
            {
                int k = 0;
                for (k = j;k < n - 1;k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0;i < n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int arr1[100] = {0};
    int arr2[100] = {0};
    int arr3[200] = {0};

 
    scanf("%d %d", &n, &m);
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
             arr3[k++] = arr1[i++];
        }
        else
        {
             arr3[k++] = arr2[j++];
        }
    }
    if(i == n)
    {
        for(; j<m; j++)
        {
            arr3[k++] = arr2[j];
        }
    }
    else
    {
        for(; i<n; i++)
        {
            arr3[k++] = arr1[i];
        }
    }
    for(i=0; i<k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}