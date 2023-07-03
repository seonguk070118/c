#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,i,sum=1;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}

