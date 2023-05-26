#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int year,month;
	scanf("%d %d",&year,&month);
	if(month==2)
	{
		if(year%400==0)
		{
			printf("29");
		}
		else if(year%4==0 && year%100!=0)
		{
			printf("29");
		}
		else
		{
			printf("28");
		}
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf("30");
	}
	else
	{
		printf("31");
	}
	return 0;
}
