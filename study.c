#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int a[10]={},b,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	printf("%d",a[b-1]);
	return 0;
}
