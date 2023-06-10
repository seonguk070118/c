#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	double a,b,i;
	scanf("%lf %lf",&a,&b);
	for(i=a;i<=b;i+=0.01)
	{
		printf("%.2lf ",i);
	}
    return 0;
}
