#include <stdio.h>
#include <string.h>
#include<stddef.h>
int main()
{
	char s[80], t;
	fgets(s, sizeof(s), stdin);
	int  i;
	size_t n = strlen(s);
	for (i = 0;i < (n / 2);i++)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
	printf("%s", s);
	return 0;
}