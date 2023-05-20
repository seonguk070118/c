#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int i;
    char a[21];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
    	if(a[i]>=65&&a[i]<=90)
    		a[i]+=32;
    	else if(a[i]>=97&&a[i]<=122)
    		a[i]-=32;
	}
	printf("%s",a);
    return 0;
}
