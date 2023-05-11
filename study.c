#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	int a[1001]={},b,i;
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=b;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=1;i<=b;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
