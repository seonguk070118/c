#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%10==1)
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
