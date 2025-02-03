//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//	next:
//	printf("跳过haha\n");
//	return 0;
//}
// 
// 
// 
//多层循环时有用（以下伪代码）
//for ()
//{
//	for ()
//	{
//		for ()
//		{
//			if (disaster)
//				goto error;
//		}
//	}
//}
//error;


//关机程序
//cmd里输入shutdown -s -t 60 //倒计时60s关机
//shutdown -a //取消关机
//system是一个库函数，用来执行系统命令
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("将在120s后关机，输入“我是猪”可取消\n");
	scanf("%s",input);//“我是猪”是字符串，一个汉字占两个字符空间
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("算你识相，取消关机");
	}
	else
	{
		goto again;
	}
	//cmd-命令行窗口
	return 0;

	//"服务"---添加关机程序文件---改为自动
}