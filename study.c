#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int f(int n)
	{
		if(n%400==0)
			return 1;
		else if(n%4==0&&n%100!=0)
			return 1;
		else
			return 0; 
	}
	
int main()
{
	int n;
	scanf("%d",&n);
	if(f(n)==1)
	{
		printf("À±³â");
	}
	else{
		printf("Æò³â");
	}
	return 0;
}
