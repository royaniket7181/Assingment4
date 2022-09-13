#include<stdio.h>
int main()
{
	int i=1,p;
	printf("Table of 5:\n");
	while(i<=10)
	{
		p=i*5;
		printf("5*%d=%d\n",i,p);
		i++;
	}
}