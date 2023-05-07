#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=a/b;
	printf("%.10lf",c);
	return 0;
}
