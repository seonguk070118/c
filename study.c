#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

long long f()
{
	return -2147483649;
}

int main()
{
	printf("%lld",f());
	return 0;
}
