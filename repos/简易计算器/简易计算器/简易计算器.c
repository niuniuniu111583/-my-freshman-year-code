#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"test.h"
int main()
{
	double num1, num2;
	char op;
	double result;
	printf("输入两个整数和运算符：");
	scanf("%lf%c%lf", &num1, &op, &num2);
	switch (op)
	{
	case '+':
		result = add(num1,num2);
		break;
	case '-':
		result = subtract(num1, num2);
		break;
	case '*':
		result = multiply(num1, num2);
		break;
	case '/':
		result = divide(num1, num2);
		if (result == HUGE_VAL)
			return 1;
		break;
	default:
		printf("输入错误\n");
		return 1;
	}
	printf("%.1lf %c %.1lf = %.1lf", num1, op, num2, result);
	return 0;
}