#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int i;
	char n,m;
	scanf("%c %c",&n,&m);
	if(n>=m)
	{
		for(i=m;i<=n;i++)
		{
			printf("%c ",i);
		}
	}
	else
	{
		for(i=n;i<=m;i++)
		{
			printf("%c ",i);
		}
	}
    return 0;
}
