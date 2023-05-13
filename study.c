#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    char str[11]={};
    int n,i;
    scanf("%s %d",str,&n);
    for(i=0;i<n;i++)
    {
    	printf("%s",str);
	}
    return 0;
}
