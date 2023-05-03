#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdlib.h>

int main()
{
	char str[101];
	int i;
	//gets(str);
	scanf("%[^\n]s",str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
