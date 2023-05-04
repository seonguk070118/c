#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
	{
		printf("양수");
	}
	else if(n==0){
		printf("%d",n);
	}
	else{
		printf("음수");
	}
	return 0;
}
