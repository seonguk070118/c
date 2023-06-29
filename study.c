#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>

typedef struct STUDENT{
	int no;
	int inf;
	int mat;
	int sum;
	double avg;
}student;

int main()
{
	int n,i;
	student a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i].no,&a[i].inf,&a[i].mat);
		a[i].sum=a[i].inf+a[i].mat;
		a[i].avg=((float)a[i].inf+(float)a[i].mat)/2;
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d %.1f\n",a[i].no,a[i].sum,a[i].avg);
	}
	return 0;
}

