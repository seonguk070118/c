#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a%10==1){
		if(a==11){
			printf("%dth",a);
		}
		else{
			printf("%dst",a);
		}
	}
	else if(a%10==2){
		if(a==12){
			printf("%dth",a);
		}
		else{
			printf("%dnd",a);
		}
	}
	else if(a%10==3){
		if(a==13){
			printf("%dth",a);
		}
		else{
			printf("%drd",a);
		}
	}
	else{
		printf("%dth",a);
	}
	return 0;
}
