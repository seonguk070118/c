#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int y,m,d,sum=0;
    scanf("%d %d %d",&y,&m,&d);
    sum=(y-m+d)%10;
    if(sum==0) printf("대박");
    else printf("그럭저럭"); 
	return 0;
}


