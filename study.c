#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0)
    {
    	printf("Leap");
	}
   	else if(year%4==0 && year%100!=0)
	{
		printf("Leap");
	}
	else{
		printf("Normal");
	}
    return 0;
}

