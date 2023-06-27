#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

int n;

long long int d[110];

int f(){
	int man=1000000000,i;
	for(i=1;i<=n;i++)
	{
		if(d[i]<man)
		{
			man=d[i];
		}
	}
	return man;
}
int main()
{
  scanf("%d", &n);
  int i;
  for(i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}

