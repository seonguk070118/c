#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int a[1001]={},n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d: ",i+1);
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				if(a[i]>a[j])
					printf("> ");
				else if(a[i]<a[j])
					printf("< ");
				else if(a[i]=a[j])
					printf("= ");
			}
		}
		printf("\n");
	}
    return 0;
}
