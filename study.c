#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int a,b,mx=0,i,sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
   	if(sum>mx)
   		mx=sum;
   	sum=a-b;
   	if(sum>mx)
   		mx=sum;
   	sum=a*b;
   	if(sum>mx)
   		mx=sum;
   	sum=a/b;
   	if(sum>mx)
   		mx=sum;
   	sum=b-a;
   	if(sum>mx)
   		mx=sum;
   	sum=b/a;
   	if(sum>mx)
   		mx=sum;
   	sum=a;
   	for(i=1;i<b;i++)
   	{
   		sum=sum*a;
	}
	if(sum>mx)
   		mx=sum;
	sum=b;
   	for(i=1;i<a;i++)
   	{
   		sum=sum*b;
	}
	if(sum>mx)
   		mx=sum;
	printf("%.6f",(float)mx);
    return 0;
}
