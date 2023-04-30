#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdlib.h>

int main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    t=(a*60)+b;
    t=t-30;
    t=t+24*60;
    t=t%(24*60);
    a=t/60;
    b=t%60;
    printf("%d %d",a,b);
    return 0;
}
