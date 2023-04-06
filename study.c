#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int h,m,t,lm;
    scanf("%d %d\n%d",&h,&m,&t);
    if(m+t>60)
    {
    	lm=(m+t)/60;
    	m=(m+t)%60;
    	if(h+lm>23)
    	{
    		h=h+lm-24;
    		printf("%d %d",h,m);
		}
		else
		{
			h=h+lm;
			printf("%d %d",h,m);
		}
	}
	else
	{
		m=m+t;
		printf("%d %d",h,m);
	}
	return 0;
}


