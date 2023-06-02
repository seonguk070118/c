#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	double a,b,p,body;
	scanf("%lf %lf",&a,&b);
	if(a<150){
		p=(a-100);
	}
	else if(a<160&&a>=150){
		p=(a-150)/2+50;
	}
	else if(a>=160){
		p=(a-100)*0.9;
	}
	body=(b-p)*100/p;
	if(body<10)
		printf("정상");
	else if(body<=20&&body>10)
		printf("과체중");
	else if(body>20)
		printf("비만");
    return 0;
}
