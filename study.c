#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>


int main()
{
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	if(a%2==0)
	{
		sum+=a/2*10;
	}
	else
	{
		sum+=a/2+1;
	}
	if(b%2==0)
	{
		sum+=b/2*10;
	}
	else
	{
		sum+=b/2+1;
	}
	printf("%d",sum);
	return 0;
}

