#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0){
    	printf("Â¦¼ö+");
	}
	else{
		printf("È¦¼ö+");
	}
	if(b%2==0){
    	printf("Â¦¼ö=");
	}
	else{
		printf("È¦¼ö=");
	}
	if(a%2==0 && b%2==0){
		printf("Â¦¼ö");
	}
	else if(a%2==1 && b%2==1){
		printf("Â¦¼ö");
	}
	else if(a%2==0 && b%2==1){
		printf("È¦¼ö");
	}
	else if(a%2==1 && b%2==0){
		printf("È¦¼ö");
	}
    return 0;
}

