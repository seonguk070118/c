#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main()
{
	int a,b,c,max=0;
	scanf("%d %d %d",&a,&b,&c);
	if(max<a) max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(max==a && a<b+c){
		printf("yes");
	}
	else if(max==b && b<a+c){
		printf("yes");
	}
	else if(max==c && c<b+a){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
