#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int a[8]={},p=0,i,s=101;
    for(i=0;i<7;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]%2==1)
    		p+=a[i];
	if(a[i]%2==1 && a[i]<s)
		s=a[i];
		
	}
	printf("%d\n%d",p,s);
	return 0;
}


