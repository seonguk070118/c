#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("%d",sum);
}
