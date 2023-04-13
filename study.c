#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdlib.h>

int main()
{
    float s,l,t,i,at=0,p=0;
    for(i=0;i<5;i++)
    {
    	scanf("%f %f",&s,&l);
    	t = l-s;
    	t = t-1;
    	if(t>4) t=4;
    	at+=t;
    	if(t>0) p+=(t*10000);
	}
	if(at>=15) p=p-(p*0.05);
	else if(at<=5) p=p+(p*0.05);
	printf("%.0f",p);
    return 0;
}


