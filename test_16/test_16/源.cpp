#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//链表结点的定义
struct Node
{
    int data;//数据域
    struct Node* next;//指针域
};

int main()
{
    struct Node* list = NULL;//指向链表的指针 
    struct Node* tail = NULL;//指向链表尾部元素的指针
    //输入n
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int m = 0;
    int d = 0;//要删除的元素

    //接首n个数字并尾插到链表中
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
        pn->data = m;
        pn->next = NULL;

        //插入第一个元素
        if (list == NULL)
        {
            list = pn;
            tail = pn;
        }
        else
        {
            tail->next = pn;
            tail = pn;
        }
    }

    //接收要删除的元素
    scanf("%d", &d);

    //删除链表中指定的元素

    struct Node* cur = list;
    struct Node* prev = NULL;

    while (cur)
    {
        //找到了要删除的元素
        if (cur->data == d)
        {
            //删除
            struct Node* pd = cur;
            //删除的如果是第一个结点
            if (cur == list)
            {
                list = list->next;
                cur = list;
            }
            else
            {
                prev->next = cur->next;
                cur = prev->next;
            }
            free(pd);
            n--;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }

    //输出
    printf("%d\n", n);
    cur = list;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    //释放链表
    cur = list;
    struct Node* del = NULL;
    while (cur)
    {
        del = cur;
        cur = cur->next;
        free(del);
    }
    list = NULL;

    return 0;
}
