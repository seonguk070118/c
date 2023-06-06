#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int i,n,m;
	scanf("%d %d",&n,&m);
	if(n>=m)
	{
		for(i=m;i<=n;i++)
		{
			printf("%d ",i);
		}
	}
	else
	{
		for(i=n;i<=m;i++)
		{
			printf("%d ",i);
		}
	}
    return 0;
}
