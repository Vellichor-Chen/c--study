#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒内关机,输入：aaa则取消关机");
	scanf("%s", input);
	if (strcmp(input, "aaa") == 0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}