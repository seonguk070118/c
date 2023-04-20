#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int n,k,i,sum[10001]={0,},j=1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		sum[j]=i;
    		j++;
		}
	}
	printf("%d",sum[k]);
    return 0;
}

