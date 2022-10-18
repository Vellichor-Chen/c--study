#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//������Ķ���
struct Node
{
    int data;//������
    struct Node* next;//ָ����
};

int main()
{
    struct Node* list = NULL;//ָ�������ָ�� 
    struct Node* tail = NULL;//ָ������β��Ԫ�ص�ָ��
    //����n
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int m = 0;
    int d = 0;//Ҫɾ����Ԫ��

    //����n�����ֲ�β�嵽������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
        pn->data = m;
        pn->next = NULL;

        //�����һ��Ԫ��
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

    //����Ҫɾ����Ԫ��
    scanf("%d", &d);

    //ɾ��������ָ����Ԫ��

    struct Node* cur = list;
    struct Node* prev = NULL;

    while (cur)
    {
        //�ҵ���Ҫɾ����Ԫ��
        if (cur->data == d)
        {
            //ɾ��
            struct Node* pd = cur;
            //ɾ��������ǵ�һ�����
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

    //���
    printf("%d\n", n);
    cur = list;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    //�ͷ�����
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
