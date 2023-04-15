#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    int y,s;
    scanf("%d %d",&y,&s);
    if(s==1 || s==2) printf("%d",100-(y/10000)+13);
    else printf("%d",13-(y/10000));
    return 0;
}


