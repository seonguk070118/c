#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b){
    	if(a<=c){
    		if(b<=c) printf("%d",b);
    		else printf("%d",c);
		}
		else printf("%d",a);
	}
	else if(b<=a){
		if(b<=c){
			if(a<=c) printf("%d",a);
			else printf("%d",c);
		}
		else printf("%d",b);
	}
	else if(c<=a){
		if(c<=b){
			if(b<=a) printf("%d",b);
			else printf("%d",a);
		}
		else printf("%d",c);
	}
    else printf("%d",a);
	return 0;
}


