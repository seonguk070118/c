#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<string.h>
#include <stdbool.h>
int main()
{
	int a,b,c,max=0;
	scanf("%d %d %d",&a,&b,&c);
	if(max<a) max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(max==a && a<b+c){
		if(a==b && b==c)
		{
			printf("���ﰢ��");
		}
		else if(a==b || b==c || c==a)
		{
			printf("�̵�ﰢ��");
		}
		else if((a*a)==(b*b)+(c*c))
		{
			printf("�����ﰢ��");
		}
		else
		{
			printf("�ﰢ��");
		}
	}
	else if(max==b && b<a+c){
		if(a==b && b==c)
		{
			printf("���ﰢ��");
		}
		else if(a==b || b==c || c==a)
		{
			printf("�̵�ﰢ��");
		}
		else if((b*b)==(a*a)+(c*c))
		{
			printf("�����ﰢ��");
		}
		else
		{
			printf("�ﰢ��");
		}
	}
	else if(max==c && c<b+a){
		if(a==b && b==c)
		{
			printf("���ﰢ��");
		}
		else if(a==b || b==c || c==a)
		{
			printf("�̵�ﰢ��");
		}
		else if((c*c)==(b*b)+(a*a))
		{
			printf("�����ﰢ��");
		}
		else
		{
			printf("�ﰢ��");
		}
	}
	else{
		printf("�ﰢ���ƴ�");
	}
	return 0;
}
