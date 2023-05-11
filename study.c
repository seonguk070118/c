#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>

int main()
{
	char a[100001]={};
	int i,s,l=0,r=0;
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		if(a[i]=='(')
			l++;
		else if(a[i]==')')
			r++;
	}
	printf("%d %d",l,r);
	return 0;
}
