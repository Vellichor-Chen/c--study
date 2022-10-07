#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////int main()
////{
////    int ch = 0;
////    char Vowel[] = "AaEeIiOoUu";
////    while ((ch = getchar()) != EOF)
////    {
////        int i = 0;
////        for (i = 0; i < strlen(Vowel);i++)
////        {
////            if (ch == Vowel[i])
////            {
////                printf("Vowel\n");
////                break;
////            }
////
////        }
////        if (i == strlen(Vowel))
////        {
////            printf("Consonant\n");
////        }
////        getchar();
////    }
////    return 0;
////}
//int main()
//{
//    int ch = 0;
//    char Vowel[] = "AaEeIiOoUu";
//    while ((ch = getchar()) != EOF)
//    {
//        if (strchr(Vowel, ch))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//            printf("%c is an alphabet.\n", ch);
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
///*int main()
//{
//    int ch = 0;
//    while(~scanf("%c\n",&ch))
//    {
//        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
//            printf("%c is an alphabet.\n",ch);
//        else
//        {
//            printf("%c is not an alphabet.\n",ch);
//        }
//    }
//    return 0;
//}*/
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (isalpha(ch))
//            printf("%c is an alphabet.\n", ch);
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//    }
//    return 0;
//}
//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//        else if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (~scanf("%d %d", &a, &b))
//    {
//        if (a == b)
//        {
//            printf("%d=%d\n", a, b);
//        }
//        else if (a > b)
//        {
//            printf("%d>%d\n", a, b);
//        }
//        else
//        {
//            printf("%d<%d\n", a, b);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int t = 0;
//    while (~scanf("%d", &t))
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d", &a, &b, &c))
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if (a == b && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int w = 0;
//    int h = 0;
//    double bmi = 0;
//    while (~scanf("%d %d", &w, &h))
//    {
//        bmi = w / (h / 100.0) / (h / 100.0);
//        if (bmi < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (bmi >= 18.5 && bmi <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (bmi > 23.9 && bmi <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    while (~scanf("%lf %lf %lf", &a, &b, &c))
//    {
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            double i = b * b - 4 * a * c;
//            if (i == 0.0)
//            {
//                printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//            }
//            else if (i > 0.0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n",
//                    (-b - sqrt(i)) / (2 * a), (-b + sqrt(i)) / (2 * a));
//            }
//            else
//            {
//                double real = (-b) / (2 * a);
//                double image = sqrt(-i) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
//                    real, image, real, image);
//            }
//        }
//    }
//    return 0;
//}
#include <stdio.h>
#include <math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (scanf("%f %f %f", &a, &b, &c) != EOF)
    {
        if (a != 0)
        {
            float disc = b * b - 4 * a * c;
            if (disc > 0.0)
            {
                printf("x1=%.2f;x2=%.2f\n",
                    (-b - sqrt(disc)) / (2 * a),
                    (-b + sqrt(disc)) / (2 * a)
                );
            }
            else if (disc < 0.0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
                    (-b) / (2 * a), sqrt(-disc) / (2 * a),
                    (-b) / (2 * a), sqrt(-disc) / (2 * a));
            }
            else
            {
                printf("x1=x2=%.2f\n", (-b) / (2 * a));
            }
        }
        else
        {
            printf("Not quadratic equation\n");
        }
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    while (~scanf("%lf %lf %lf", &a, &b, &c))
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            double i = b * b - 4 * a * c;
            if (i == 0.0)
            {
                if ((-b) / (2 * a) == -0)
                {
                    printf("x1=x2=0.00");
                }
                else
                {
                    printf("x1=x2=%.2lf\n", (-b) / (2 * a));
                }
            }
            else if (i > 0.0)
            {
                printf("x1=%.2lf;x2=%.2lf\n",
                    (-b - sqrt(i)) / (2 * a), (-b + sqrt(i)) / (2 * a));
            }
            else
            {
                double real = (-b) / (2 * a);
                double image = sqrt(-i) / (2 * a);
                if (image < 0)
                    image = -image;
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
                    real, image, real, image);
            }
        }
    }
    return 0;
}