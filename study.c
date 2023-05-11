#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	int a[1001]={},b,i,j,k=0,x=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",a[k+x]);
			k++;
			if(k+x>=b)
				k=k-b;
		}
		x++;
		k=0;
		printf("\n");
	}
	return 0;
}
