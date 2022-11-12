#pragma once
#define  _CRT_SECURE_NO_WARNINGS 1

//#define MAX 1000

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>



enum option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT ,//6
	SAVE//7

};
struct peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct contact
{
	struct peoinfo *data;
	int size;//��¼��ǰ���е�Ԫ�ظ���
	int capacity;//��ǰ�������
};

//��������
//��ʼ��
void initcontact(struct contact* ps);
//����
void addcontact(struct contact* ps);
//��ӡ
void showcontact(const struct contact* ps);
//ɾ��
void delcontact(struct contact* ps);
//����
void searchcontact(const struct contact* ps);
//�޸�
void modifycontact(struct contact* ps);
//����
void sortcontact(struct contact* ps);
//�ͷ��ڴ�ռ�
void destroycontact(struct contact*ps);
//����
void savecontact(struct contact* ps);
//�����ļ�����Ϣ��ͨѶ¼
void loadcontact(struct contact* ps);
