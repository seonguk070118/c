#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int i,n,max=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
	}
	printf("%d",max);
	return 0;
}
