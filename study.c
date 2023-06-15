#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>



void f(int n){
	if(n==0) return;
	f(n/2);
	if(n%2==0) printf("0");
	else if(n%2==1) printf("1");
}

int main()
{
	int n,m;
  	scanf("%d", &n);
  	if(n<=0) printf("0");
  	f(n);
}
