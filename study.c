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
        if(y<10 && d<10 && m<10)
            printf("190%d/0d/0%d M",y,m,d);
        else if(y<10 && m<10)
            printf("190%d/0%d/%d M",y,m,d);
        else if(y<10 && d<10)
            printf("190%d/%d/0%d M",y,m,d);
        else if(d<10 && m<10)
            printf("19%d/0%d/0%d M",y,m,d);
        else if(d<10)
            printf("19%d/%d/0%d M",y,m,d);
        else if(y<10)
            printf("190%d/%d/%d M",y,m,d);
        else if(m<10)
            printf("19%d/0%d/%d M",y,m,d);
        else
            printf("19%d/%d/%d M",y,m,d);
    }
    if(j[1]/1000000==2)
    {
        if(y<10 && d<10 && m<10)
            printf("190%d/0%d/0%d F",y,m,d);
        else if(y<10 && m<10)
            printf("190%d/0%d/%d F",y,m,d);
        else if(y<10 && d<10)
            printf("190%d/%d/0%d F",y,m,d);
        else if(d<10 && m<10)
            printf("19%d/0%d/0%d F",y,m,d);
        else if(d<10)
            printf("19%d/%d/0%d F",y,m,d);
        else if(y<10)
            printf("190%d/%d/%d F",y,m,d);
        else if(m<10)
            printf("19%d/0%d/%d F",y,m,d);
        else
            printf("19%d/%d/%d F",y,m,d);
    }
    if(j[1]/1000000==3)
    {
        if(y<10 && d<10 && m<10)
            printf("200%d/0%d/0%d M",y,m,d);
        else if(y<10 && m<10)
            printf("200%d/0%d/%d M",y,m,d);
        else if(y<10 && d<10)
            printf("200%d/%d/0%d M",y,m,d);
        else if(d<10 && m<10)
            printf("20%d/0%d/0%d M",y,m,d);
        else if(d<10)
            printf("20%d/%d/0%d M",y,m,d);
        else if(y<10)
            printf("200%d/%d/%d M",y,m,d);
        else if(m<10)
            printf("20%d/0%d/%d M",y,m,d);
        else
            printf("20%d/%d/%d M",y,m,d);
    }
    if(j[1]/1000000==4)
    {
        if(y<10 && d<10 && m<10)
            printf("200%d/0%d/0%d F",y,m,d);
        else if(y<10 && m<10)
            printf("200%d/0%d/%d F",y,m,d);
        else if(y<10 && d<10)
            printf("200%d/%d/0%d F",y,m,d);
        else if(d<10 && m<10)
            printf("20%d/0%d/0%d F",y,m,d);
        else if(d<10)
            printf("20%d/%d/0%d F",y,m,d);
        else if(y<10)
            printf("200%d/%d/%d F",y,m,d);
        else if(m<10)
            printf("20%d/0%d/%d F",y,m,d);
        else
            printf("20%d/%d/%d F",y,m,d);
    }
    return 0;
}

