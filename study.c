#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	s=a+c;
	if(b>s)
	{
		printf("advertise");
	}
	else if(b<s)
	{
		printf("do not advertise");
	}
	else
	{
		printf("does not matter");
	}
	return 0;
}
