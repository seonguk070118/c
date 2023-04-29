#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdlib.h>

int main()
{
    int i,a[3],max=0,min=100,front=78958;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
    	if(a[i]>=max) max=a[i];
    	if(a[i]<=min) min=a[i];
	}
	for(i=0;i<3;i++)
    {
		if(a[i]!=max && a[i]!=min) front=a[i];
		if(a[i]==max && a[i]==min) front=a[i]; 
	}
	if(a[0]==a[1]) front=a[0];
	if(a[0]==a[2]) front=a[0];
	if(a[1]==a[2]) front=a[1];
    printf("%d %d %d",min,front,max);
    return 0;
}
