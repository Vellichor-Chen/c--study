#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n",sum);

//	short age = 20;
//	float weight = 95.6f;
//	printf("%d\n", age);
//	printf("%f\n",weight);
// 
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
// 
//	char ch = 'A';
//	printf("%c\n",ch);
//	int age = 20;
//	printf("%d\n", age);
//	float f = 3.1;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
	return 0;
}