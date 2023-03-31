#include<stdio.h>
int main()
{
    int j[2],y,d,m;
    scanf("%d-%d",&j[0],&j[1]);
    y=j[0]/10000;
    m=(j[0]-y*10000)/100;
    d=j[0]-y*10000-m*100;
    if(j[1]/1000000==1)
    {
            printf("19%.2d/%.2d/%.2d M",y,m,d);
    }
    if(j[1]/1000000==2)
    {

            printf("19%.2d/%.2d/%.2d F",y,m,d);
    }
    if(j[1]/1000000==3)
    {

            printf("20%.2d/%.2d/%.2d M",y,m,d);
    }
    if(j[1]/1000000==4)
    {
            printf("20%.2d/%.2d/%.2d F",y,m,d);
    }
    return 0;
}

