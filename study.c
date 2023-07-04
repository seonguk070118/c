#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int n,a,i,b;
	scanf("%d",&n);
	b=n/2+1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(i==b){
			printf("%d ",a);
		}
		if(i==1){
			printf("%d ",a);
		}
		if(i==n)
		{
			printf("%d ",a);
		}
	}
	return 0;
}

