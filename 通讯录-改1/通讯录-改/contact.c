#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void initcontact(struct contact* ps)
{
	ps->data = (struct peoinfo*)malloc(3 * sizeof(struct peoinfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void checkcapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct peoinfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void addcontact(struct contact* ps)
{
	checkcapacity(ps);//��⵱ǰͨѶ¼������1.�������ӿռ�2.������ɶ�²���
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void showcontact(const struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0;i < ps->size;i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}



static int findbyname(const struct contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}




void delcontact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	//����Ҫɾ����ϵ�˵�λ��
	int pos = findbyname(ps, name);//�ҵ�������������Ԫ�ص��±꣬�Ҳ�������-1
	//ɾ��
	if (pos == -1)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos;j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void searchcontact(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = findbyname(ps, name);//�ҵ�������������Ԫ�ص��±꣬�Ҳ�������-1
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void modifycontact(struct contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = findbyname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);
		printf("�޸����\n");
	}
}

void sortcontact(struct contact* ps)
{
	//ð������
}

void destroycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

