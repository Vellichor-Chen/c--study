#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    printf("%15d", 0xABCDEF);
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double circumference = 0.0;
    double area = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);
    circumference = a + b + c;
    double p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2lf,area=%.2lf", circumference, area);
    return 0;
}