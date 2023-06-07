#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int f(int x){
	if(x==0)
		return 0;
	if(x==1)
		return 1;
	return (f(x-1)+f(x-2));
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
    return 0;
}
