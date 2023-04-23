#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<time.h>

int random_(void);
void input_value(int random_2);
void output_value(void);

int random=0,i,j;
char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int main()
{
	input_value(5);
	output_value();
	
    return 0;
}

int random_(void)
{
	srand(time(NULL));
	random = rand()%6+1;
	return random;
}

void input_value(int random_2)
{
	if(random_2==1){
		a[1][1]='*';
	}
	else if(random_2==2){
		a[0][2]='*';
		a[2][0]='*';
	}
	else if(random_2==3){
		a[0][2]='*';
		a[2][0]='*';
		a[1][1]='*';
	}
	else if(random_2==4){
		a[0][0]='*';
		a[0][2]='*';
		a[2][0]='*';
		a[2][2]='*';
	}
	else if(random_2==5){
		a[0][0]='*';
		a[0][2]='*';
		a[2][0]='*';
		a[2][2]='*';
		a[1][1]='*';
	}
	else if(random_2==6){
		a[0][0]='*';
		a[0][2]='*';
		a[1][0]='*';
		a[1][2]='*';
		a[2][0]='*';
		a[2][2]='*';
	}
}

void output_value(void)
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}

