#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main()
{
	int a[10000001]={},i=0,n,m,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]=1;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&x);
		printf("%d ",a[x]);
	}
	return 0;
}
