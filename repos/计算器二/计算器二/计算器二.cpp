#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double num1, num2;
	char op;
	double result=0;
	printf("输入两个整数和运算符：");
	scanf("%lf %c %lf", &num1, &op, &num2);
	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (result == 0)
		{
			printf("除数为0错误");
			return 1;
		}
		else
		{
			result = num1 / num2;
		}
			break;
	default:
		printf("输入错误\n");
		return 1;
	}
	printf("%.1lf %c %.1lf = %.1lf", num1, op, num2, result);
	return 0;
}