#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <stdlib.h>

int main()
{
    int n,m;
    char b;
    scanf("%d%c%d",&n,&b,&m);
    switch(b){
    	case '+':printf("%d",n+m); break;
    	case '-':printf("%d",n-m); break;
    	case '*':printf("%d",n*m); break;
    	case '/':printf("%.2f",(float)n/m); break;
    	
    	
	}
    return 0;
}
