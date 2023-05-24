#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int f(int a)
{
	int s=0;
	while(a)
	{
		s=s*10;
		s=s+(a%10);
		a=a/10;
	}
	return s;
}

int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=a+f(a);
	if(f(b)==b)
		printf("YES");
	else
		printf("NO");
	return 0;
}
