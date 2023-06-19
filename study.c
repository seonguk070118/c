#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int i,a;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a);
		if(a%5==0)
		{
			printf("%d",a);
			break;
		}
		if(i==9)
		{
			printf("0");
			break;
		}
	}
}
