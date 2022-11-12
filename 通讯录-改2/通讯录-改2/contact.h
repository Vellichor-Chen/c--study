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
	int size;//记录当前已有的元素个数
	int capacity;//当前最大容量
};

//声明函数
//初始化
void initcontact(struct contact* ps);
//增加
void addcontact(struct contact* ps);
//打印
void showcontact(const struct contact* ps);
//删除
void delcontact(struct contact* ps);
//查找
void searchcontact(const struct contact* ps);
//修改
void modifycontact(struct contact* ps);
//排序
void sortcontact(struct contact* ps);
//释放内存空间
void destroycontact(struct contact*ps);
//保存
void savecontact(struct contact* ps);
//加载文件的信息到通讯录
void loadcontact(struct contact* ps);
