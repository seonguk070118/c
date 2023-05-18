#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int a,b,c,d,sum;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum=a+b+c+d;
     
    if(sum==0)
    {
    	printf("¸ð");
	}
	else if(sum==1)
    {
    	printf("µµ");
	}
	else if(sum==2)
    {
    	printf("°³");
	}
	else if(sum==3)
    {
    	printf("°É");
	}
	else{
		printf("À·");
	}
    return 0;
}
