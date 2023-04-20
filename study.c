#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int m,sum;
    scanf("%d",&m);
    if(m<=500)
    {
    	sum=m*70/100;
	}
	else if(m>500&&m<=1500)
    {
    	sum=350+(m-500)*40/100;
	}
	else if(m>1500&&m<=4500)
    {
    	sum=750+(m-1500)*15/100;
	}
	else if(m>4500&&m<10000)
    {
    	sum=1200+(m-4500)*5/100;
	}
	else if(m>10000)
    {
    	sum=1475+(m-10000)*2/100;
	}
	printf("%d",sum);
    return 0;
}

