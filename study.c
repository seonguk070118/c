#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int a,b;
    scanf("%d %d",&a,&b);
    if(b%a==0)
    {
    	printf("%d*%d=%d",a,b/a,b);
	}
	else if(a%b==0)
    {
    	printf("%d*%d=%d",b,a/b,a);
	}
	else{
		printf("none");
	}
    return 0;
}
