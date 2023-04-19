#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int y;
    scanf("%d",&y);
    y=2013-y;
    if(y>=2000){
        printf("%d %d",y-2000,3);
    }
    else printf("%d %d",y-1900,1);
    return 0;
}
