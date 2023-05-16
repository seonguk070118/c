#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
 
    int a,b,bm=1;
    int m,i,s,sf=0;
    scanf("%d",&m);
    scanf("%d %d %d",&a,&b,&s);
    sf+=s;
    bm=b;
    for(i=0;i<m-1;i++)
    {
    	scanf("%d %d %d",&a,&b,&s);
    	sf+=s;
    	bm=b*(bm/a);
	}
	printf("%d %d",sf%2,bm);
    return 0;
}
