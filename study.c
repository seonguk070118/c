#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	int a,b,c,sum;
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	sum=b+(c*10);
	sum=sum*2;
	sum=sum%100;
	printf("%d\n",sum);
	if(sum<=50)
	{
		printf("GOOD");
	}
	else
	{
		printf("OH MY GOD");
	}
	return 0;
}
