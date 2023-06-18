#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%3==0)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
}
