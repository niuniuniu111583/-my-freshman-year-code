
#define _CRT_SECURE_NO_WARNINGS

//例1.1
//#include<stdio.h>
//int main()
//{
//    printf("This is a program\n");
//    return 0;
//}

//例1.2
//#include<stdio.h>
//int main()
//{
//    int a, b,sum;
//    a = 123;
//    b = 456;
//    sum = a + b;
//    printf("sum is %d\n", sum);
//    return 0;
//}

//例1.3
//#include<stdio.h>
//int main()
//{
//    int max(int a, int b);
//    int a,  b, c;
//    scanf("%d %d", &a, &b);
//    c = max(a, b);
//    printf("max=%d", c);
//    return 0;
//}
//int max(int a, int b)
//{
//    int z;
//    if (a > b)
//        z = a;
//    else z = b;
//    return z;
//}

//例2.3
//#include<stdio.h>
//int main()
//{
//    for (int i = 2000;i <= 2500;i++)
//        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//            printf("%d ", i);
//    return 0;
//}

//例3.1
//#include<stdio.h>
//int main()
//{
//    float f, c;
//    f = 64.0;
//    c = (5.0 / 9) * (f - 32);
//    printf("f=%f\nc=%f\n", f, c);
//    return 0;
//
//}

//例3.2
//#include<stdio.h>
//int main()
//{
//    float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
//    p1 = p0 * (1 + r1);
//    p2 = p0 * (1 + r2);
//    p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
//    printf("p1=%f\np2=%f\np3=%f\n", p1, p2, p3);
//    return 0;
//}

//例3.3
//#include<stdio.h>
//int main()
//{
//    char c1, c2;
//    c1 = 'A';
//    c2 = c1 + 32;
//    printf("%c\n", c2);
//    printf("%d\n", c2);
//    return 0;
//}

//例3.4
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a, b, c, s, area;
//    scanf("%lf %lf %lf",&a, &b, &c);
//    s = (a + b + c)/2;
//    area = sqrt(s * (s - a) * (s - b) * (s - c));
//    printf("area=%lf", area);
//    return 0;
//}

//例3.5
//#include<stdio.h>
//#include<math.h>
//int main()
//{
   /* double a,b,c,disc,x1, x2, p, q;
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    p = -b / (2.0 * a);

    q = sqrt(disc) / (2.0 * a);
    x1 = p + q; x2 = p - q;
    printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);*/
    //
    //    return 0;
    //}

    //例3.6
    //#include<stdio.h>
    //int main()
    //{
    //    double a = 1.0;
    //    printf("%f\n", a / 3);
    //    return 0;
    //}

    //例3.7
    //#include<stdio.h>
    //int main()
    //{
    //    double a = 10000 / 3.0;
    //    printf("%-25.15f\n%25.15f\n",a, a);
    //    return 0;
    //
    //}

    //例3.8
    //#include<stdio.h>
    //int main()
    //{
    //    char a = 'B', b = 'O', c = 'Y';
    //    putchar(a);
    //    putchar(b);
    //    putchar(c);
    //    printf("\n");
    //    return 0;
    //
    //}

    //例3.9
    //#include<stdio.h>
    //int main()
    //{
    //    char a, b, c;
    //    a = getchar();
    //    b = getchar();
    //    c = getchar();
    //    putchar(a);
    //    putchar(b);
    //    putchar(c);
    //    putchar('\n');
    //    return 0;
    //}

    //例3.10
    //#include<stdio.h>
    //int main()
    //{
    //    char c1, c2;
    //    c1 = getchar();
    //    c2 = 32 + c1;
    //    putchar(c2);
    //    putchar('\n');
    //
    //    return 0;
    //}

    //4.
    //#include<stdio.h>
    //int main()
    //{
    //    char  c1, c2;
    //    c1 = 197;
    //    c2 = 198;
    //    printf("c1=%c,c2=%c\n", c1, c2);
    //    printf("cl=%d,c2=%d\n", c1, c2);
    //    return 0;
    //}
    //#include<stdio.h>
    //int main()
    //{
    //    int  c1, c2;
    //    c1 = 197;
    //    c2 = 198;
    //    printf("c1=%c,c2=%c\n", c1, c2);
    //    printf("cl=%d,c2=%d\n", c1, c2);
    //    return 0;
    //}

    //5.
    //#include<stdio.h>
    //int main()
    //{
    //    int a, b;
    //    float x, y;
    //    char c1, c2;
    //    scanf("a=%d b=%d", &a, &b);
    //    scanf("%f%e", &x, &y);
    //    scanf("%c%c", &c1, &c2);
    //    return 0;
    //}

    //6.
    //#include<stdio.h>
    //int main()
    //{
    //    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    //    c1 += 4;
    //    c2 += 4;
    //    c3 += 4;
    //    c4 += 4;
    //    c5 += 4;
    //    putchar(c1);
    //    putchar(c2);
    //    putchar(c3);
    //    putchar(c4);
    //    putchar(c5);
    //    return 0;
    //}

    //例4.1
    //#include<stdio.h>
    //#include<math.h>
    //int main()
    //{
    //    double a, b, c, disc, x1, x2, p, q;
    //    scanf("%lf%lf%lf", &a, &b, &c);
    //    disc = b * b - 4 * a * c;
    //    if (disc < 0)
    //        printf("This equation hasn't real roots\n");
    //    else
    //    {
    //        p = -b / (2.0 * a);
    //        q = sqrt(disc) / (2.0 * a);
    //        x1 = p + q; x2 = p - q;
    //        printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);
    //
    //    }
    //   
    //    return 0;
    //}

    //例4.2
    //#include<stdio.h>
    //int main()
    //{
    //    float a, b, t;
    //    scanf("%f %f", &a, &b);
    //    if (a > b)
    //    {
    //        t = a;
    //        a = b;
    //        b = t;
    //    }
    //    printf("%5.2f,%5.2f", a, b);
    //
    //    return 0;
    //}

    //例4.4
    //#include<stdio.h>
    //int main()
    //{
    //    char ch;
    //    scanf("%c", &ch);
    //    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    //    printf("%c", ch);
    //    return 0;
    //}





    //#include<stdio.h>
    //#include<math.h>
    //int main()
    //{
    //    int m;
    //    double n;
    //    while (1)
    //    {
    //        printf("请输入一个整数:");
    //        
    //        if (scanf_s("%d", &m) != 1 || m > 1001 || m <= 0)
    //        {
    //            printf("请重新输入");
    //            continue;
    //        }
    //            break;
    //    }
    //    n = sqrt(m);
    //    printf("%d", (int)n);
    //    return 0;
    //}




    //#include<stdio.h>
    //int main()
    //{
    //	float x ;
    //	scanf_s("%f", &x);
    //	if (x < 1)
    //		printf("y=%.2f", x);
    //	if (x >= 1 && x < 10)
    //		printf("y=%.2f", 2 * x - 1);
    //	if (x >= 10)
    //		printf("y=%.2f", 3 * x - 11);
    //	return 0;
    //}



    //#include<stdio.h>
    //int main()
    //{
    //	int n = 0;
    //	scanf_s("%d", &n);
    //	int m = n / 10;
    //	switch (m)
    //	{
    //	case 9:printf("A\n");break;
    //	case 8:printf("B\n");break;
    //	case 7:printf("C\n");break;
    //	case 6:printf("D\n");break;
    //	default:printf("E");
    //	}
    //	return 0;
    //}

    //for (int i =count ;i>0;i--)
    //	{
    //		nu = num/ (10 * (i - 1));
    //		printf("%d", nu);
    //		num= num % (10 * (i - 1));
    //	} 


    //#include<stdio.h>
    //int main()
    //{
    //	int num,count=0,cha;
    //	scanf_s("%d", &num);
    //	int m = num;
    //	while (m>0)
    //	{
    //		count++;
    //	    m /=10;
    //
    //	}
    //	printf("位数=%d\n", count);
    //	printf("逆序输出：");
    //	while (num>0)
    //	{
    //		cha=num % 10;
    //		printf("%d", cha);
    //		num /= 10;
    //	}
    //	return 0;
    //}







    //#include<stdio.h>
    //int main()
    //{
    //	int I = 0;
    //	scanf_s("%d", &I);
    //	double bonus,i=I/100000;
    //	if (i <= 1 && i > 0)
    //		bonus = i * 0.1;
    //	if (i > 1 && i <= 2)
    //		bonus = 1 * 0.1 + (i - 1) * 0.075;
    //	if (i > 2 && i <= 4)
    //		bonus = 1 * 0.1 + 1*0.075 + (i - 2) * 0.05;
    //	if (i > 4 && i <= 6)
    //		bonus = 1 * (0.1 + 0.075) + 2 * 0.05 + (i - 4) * 0.03;
    //	if (i > 6 && i <= 10)
    //		bonus = 1 * (0.1 + 0.075) + 2 * 0.05 + 2 * 0.03 + (i - 6) * 0.015;
    //	if (i > 10)
    //		bonus = 1 * (0.1 + 0.075) + 2 * 0.05 + 2 * 0.03 + 4 * 0.015 + (i - 10) * 0.01;
    //	printf("%.2f", bonus * 100000);
    //	return 0;
    //}



    //杨辉三角

    //#include <stdio.h>
    //int main()
    //{
    //    int i, n;
    //    int a[10][10] = { 0 };
    //    for (i = 0;i < 10;i++)
    //    {
    //        for (n = 0;n < 10;n++)
    //        {
    //            if (i == n || n == 0)
    //                a[i][n] = 1;
    //            else
    //                a[i][n] = a[i - 1][n] + a[i - 1][n - 1];
    //        }
    //    }
    //    for (i = 0;i < 10;i++)
    //    {
    //        for (n = 0;n <= i;n++)
    //        {
    //            printf("%4d ", a[i][n]);
    //        }
    //        printf("\n");
    //    }
    //    return 0;
    //}


    //
    //#include<stdio.h>
    //int main()
    //{
    //    double  profit = 0;
    //    scanf_s("%lf", &profit);
    //    int i = profit / 100000.0;
    //    double de= 0;
    //    switch (i)
    //    {
    //    case 0:
    //    case 1:de = i * 0.1;
    //        break;
    //    case 2:de = 1 * 0.1 + (i - 1) * 0.075;
    //        break;
    //    case 3:
    //    case 4:de = 1 * 0.1 + 1 * 0.075 + (i - 2) * 0.05;
    //        break;
    //    case 5:
    //    case 6:de = 1 * (0.1 + 0.075) + 2 * 0.05 + (i - 4) * 0.03;
    //        break;
    //    case 7:
    //    case 8:
    //    case 9:
    //    case 10:de = 1 * (0.1 + 0.075) + 2 * 0.05 + 2 * 0.03 + (i - 6) * 0.015;
    //        break;
    //    default:
    //        de = 1 * (0.1 + 0.075) + 2 * 0.05 + 2 * 0.03 + 4 * 0.015 + (i - 10) * 0.01;
    //        break;
    //    }
    //    printf("%.2lf", de * 100000);
    //    return 0; 
    //}



    //
    //#include<stdio.h>
    //int gcd(int m,int n)
    //{
    //    while (n != 0)
    //    {
    //        int temp;
    //        temp=m% n;
    //        m = n;
    //        n = temp;
    //    }
    //    return m;
    //}
    //int lcm(int m, int n, int f)
    //{
    //    return (m * n) / f;
    //}
    //int main()
    //{
    //    int m, n;
    //    scanf("%d %d", &m, &n);
    //    int f=gcd(m,n);
    //    printf("最大公约数=%d\n", f);
    //    printf("最小公倍数=%d", lcm(m, n, f));
    //    return 0;
    //}




     //例5.1
    //#include<stdio.h>
    //int main()
    //{
    //    int i = 1,sum=0;
    //    while (i <= 100)
    //    {
    //        sum += i;
    //        i++;
    //    }
    //    printf("%d", sum);
    //    return 0;
    //}

    //例5.2
    //#include<stdio.h>
    //int main()
    //{
    //    int i = 1, sum = 0;
    //    do
    //    {
    //        sum += i;
    //        i++;
    //    } while (i <= 100);
    //    printf("sum=%d", sum);
    //    return 0;
    //}

     //例5.5
    //#include<stdio.h>
    //int main()
    //{
    //    for (int i = 100;i <= 200;i++)
    //    {
    //        if (i % 3 != 0)
    //            printf("%d\t", i);
    //    }
    //    return 0;
    //}

    //例5.6
    //#include<stdio.h>
    //int main()
    //{
    //    for (int i = 1;i <= 4;i++)
    //    {
    //        for (int j = 1;j <= 5;j++)
    //            printf("%d\t", i * j);
    //        printf("\n");
    //    }
    //    return 0;
    //}

    //6.1
    //#include<stdio.h>
    //#include<math.h>
    //int main()
    //{
    //    int i,j ;
    //    for ( i = 2;i <= 100;i++)
    //    {
    //        for ( j = 2;j <= sqrt(i);j++)
    //        {
    //            if (i % j == 0)
    //            {
    //                break;
    //            }
    //        }
    //        if(j>sqrt(i))
    //            printf("%d\t", i);
    //    }
    //    printf("\n");
    //    return 0;
    //}

    //6.2  选择排序法
    //#include<stdio.h>
    //int main()
    //{
    //    int arr[10],i,j;
    //    for (int i = 0;i < 10;i++)
    //    {
    //        scanf("%d", &arr[i]);
    //    }
    //    int min_index;
    //    for ( i = 0;i <9;i++)
    //    {
    //        min_index = i;
    //        for ( j = i + 1;j <10;j++)
    //        {
    //            if (arr[j] < arr[min_index])
    //                min_index = j;
    //        }
    //        int temp;
    //        temp = arr[min_index];
    //        arr[min_index] = arr[i];
    //        arr[i] = temp;
    //    }
    //    for (i = 0;i <10;i++)
    //        printf("%d ", arr[i]);
    //    return 0;
    //}

    //6.11
    //#include<stdio.h>
    //int main()
    //{
    //    int i, j,k;
    //    for (i = 1;i < 6;i++)
    //    {
    //        for (j = 1;j <= i-1;j++)
    //        {
    //            printf(" \t");
    //        }
    //        for (k = 1;k < 6;k++)
    //        {
    //            printf("*\t");
    //        }
    //        printf("\n");
    //    }
    //    return 0;
    //}

    //7.3
    //#include<stdio.h>
    //#include<math.h>
    //void fun(int a)
    //{
    //    int i,j;
    //    for (i = 2;i < sqrt(a);i++)
    //    {
    //        if (a % i == 0)
    //            break;
    //    }
    //    if (i > sqrt(a))
    //        printf("%d为素数",a);
    //    else
    //    {
    //        printf("%d不为素数", a);
    //    }
    //}
    //int main()
    //{
    //    int a;
    //    scanf("%d", &a);
    //    fun(a);
    //    return 0;
    //}

    //7.4
    //#include<stdio.h>
    //void func(int arr[3][3])
    //{
    //    int i,j,temp;
    //    for ( i = 0;i < 3;i++)
    //    {
    //        for ( j = 0;j < 3;j++)
    //        {
    //            if (i <j)
    //            {
    //                temp = arr[i][j];
    //                arr[i][j] = arr[j][i];
    //                arr[j][i] = temp;
    //            }
    //        }
    //    }
    //}
    //
    //int main()
    //{
    //    int arr[3][3];
    //    for (int i = 0;i < 3;i++)
    //    {
    //        for (int j = 0;j < 3;j++)
    //        {
    //            scanf("%d", & arr[i][j]);
    //        }
    //    }
    //    func(arr);
    //    for (int i = 0;i < 3;i++)
    //    {
    //        for (int j = 0;j < 3;j++)
    //        {
    //            printf("%d\t", arr[i][j]);
    //        }
    //        printf("\n");
    //    }
    //    return 0;
    //}


    //8.1
    //#include<stdio.h>
    //void sortIntegers(int* a, int* b, int* c)
    //{
    //    int temp;
    //    if (*a > *b) { temp = *a, * a = *b, * b = temp; }
    //    if (*a > *c) { temp = *a, * a = *c, * c = temp; }
    //    if (*b > *c) { temp = *b, * b = *c, * c = temp; }
    //}
    //int main()
    //{
    //    int a, b, c;
    //    scanf("%d %d %d", &a, &b, &c);
    //    sortIntegers(&a, &b, &c);
    //    printf("%d %d %d", a, b, c);
    //    return 0;
    //}

    //8.2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //#include<stdio.h>
    //#include<string.h>
    //int main()
    //{
    //
    //    char* _str1, * _str2, * _str3;
    //    char str1[100], str2[100], str3[100];
    //    scanf("%s %s %s", str1, str2, str3);
    //    _str1 = str1;
    //    _str2 = str2;
    //    _str3 = str3;
    //    void swap(char** _str1, char** _str2);
    //    if (strcmp(_str1, _str2)>0)swap(&_str1,& _str2);
    //    if (strcmp(_str1, _str3)>0)swap(&_str1, &_str3);
    //    if (strcmp(_str2, _str3)>0)swap(&_str2, &_str3);
    //    printf("%s %s %s", _str1, _str2, _str3);
    //    return 0;
    //}
    //void swap(char** _str1, char** _str2)
    //{
    //    char* temp = *_str1;
    //    *_str1 =* _str2;
    //    *_str2 = *temp;
    //}

    //9.1
    //#include<stdio.h>
    //typedef struct
    //    {
    //        int year;
    //        int month;
    //        int day;
    //    }Date;
    //int isLeapYear(int year)
    //{
    //    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    //}
    //int daysOfMonth(int year, int month)
    //{
    //    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    //    if (month == 2 && isLeapYear(year))
    //        return 29;
    //    else
    //        return days[month];
    //}
    //int _daysOfYear(Date date)
    //{
    //    int daysOfYear=0;
    //    for (int month = 1;month < date.month;month++)
    //    {
    //        daysOfYear += daysOfMonth(date.year, month);
    //    }
    //    return daysOfYear += date.day;
    //}
    //int main()
    //{
    //    Date date;
    //    scanf("%d %d %d", &date.year, &date.month, &date.day);
    //    int final = _daysOfYear(date);
    //    printf("该日是该年的第%d天", final);
    //    return 0;
    //}


#include<stdio.h>
typedef struct
{
    int year;
    int month;
    int day;
}Date;
int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int daysOfMonth(int year, int month)
{
    int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (month == 2 && isLeapYear(year))
        return 29;
    else
        return days[month];
}
int days(Date date)
{
    int daysOfYear = 0;
    for (int month = 1;month < date.month;month++)
    {
        daysOfYear += daysOfMonth(date.year, month);
    }
    return daysOfYear += date.day;
}
int main()
{
    Date date;
    scanf("%d %d %d", &date.year, &date.month, &date.day);
    int final = days(date);
    printf("该日是该年的第%d天", final);
    return 0;
}