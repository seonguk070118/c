#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int s,i,j,k,l=0;
    scanf("%d",&s);
    for(i=s;i>=1;i--)
	{
		for(k=0;k<l;k++)
		{
			printf(" ");
		}
		l++;
    	for(j=i;j>=1;j--)
		{
    		printf("*");
		}
		printf("\n");
	}
    return 0;
}

