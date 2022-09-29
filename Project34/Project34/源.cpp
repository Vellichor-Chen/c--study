#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//FILE* pf = fopen("text.txt", "r");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	//printf("%c\n", fgetc(pf));
	//fclose(pf);
	//pf = NULL;
	//int ch = fgetc(stdin);
	//fputc
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 0;
	//}
	///*fputc('b',pf);
	//fputc('i', pf);
	//fputc('t', pf);*/
	//int ch = fgetc(pf);
	//printf("%c", ch);
	//fclose(pf);
	//pf = NULL;

}
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	FILE* pf = fopen("test.txt", "wb");
	struct S tmp = { 0 };
	if (pf == NULL)
	{
		return 0;
	}
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}