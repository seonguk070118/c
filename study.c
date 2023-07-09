#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	if(a%2==0)
	{
		sum-=a;
		printf("-%d",a);
	}
	else if(a%2==1)
	{
		sum+=a;
		printf("%d",a);
	}
	for(i=a+1;i<=b;i++)
	{
		if(i%2==0)
		{
			sum-=i;
			printf("-%d",i);
		}
		else if(i%2==1)
		{
			sum+=i;
			printf("+%d",i);
		}
	}
	printf("=%d",sum);
	return 0;
}

