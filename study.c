#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int i,a,b,c,n,sum=0;
	scanf("%d %d %d %d",&a,&b,&c,&n);
	for(i=1;i<n;i++)
	{
		a*=b;
		a+=c;
	}
	printf("%d",a);
}
