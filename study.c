#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("not prime");
			return 0;
		}
	}
	printf("prime");
	return 0;
}

