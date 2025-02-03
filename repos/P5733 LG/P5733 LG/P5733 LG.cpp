#include<stdio.h>
int main()
{
	char str[101] = { 0 };
	scanf_s("%s", str,(unsigned)sizeof(str));
	for (int i = 0;i < sizeof(str);i++)
	{
		if (str[i]>=97&&str[i]<=122)
		{
			str[i]-=32;
		}
	}
	printf("%s", str);
	return 0;
}