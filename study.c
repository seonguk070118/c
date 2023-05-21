#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int main(){
 
    bool a=1,b=1; 
	//and
    printf("%d\n",a*b);
    
	//or
    printf("%d\n",a|b);
    
    //not
    printf("%d\n",!a);
    
    //nand
    printf("%d\n",!(a*b));
    
    //nor
    printf("%d\n",!(a|b));
    
    //xor
    printf("%d\n",(a*!b)|(!a*b));
    
    //xnor
    printf("%d\n",!((a*!b)|(!a*b)));
    return 0;
}
