#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,b,i,c;
	scanf("%d %d",&a,&b);
	c=a;
	if(b==0){
		printf("1");
		return 0;
	}
	for(i=1;i<b;i++)
	{
		a=a*c;
	}
	printf("%d",a);
	return 0;
}

