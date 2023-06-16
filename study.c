#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



int main()
{
	int n,m,i;
  	scanf("%d %d",&n,&m);
  	for(i=n;i<=m;i++)
  	{
  		if(i%2==1){
  			printf("%d ",i);
		}
	}
}
