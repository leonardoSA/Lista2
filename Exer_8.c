#include <stdio.h>

int main(int argc, char **argv)
{
	int d,c,u,num;
	
	printf("digite um numero\n");
	scanf("%d",&num);
	c=(num/100);
	d=(((num%100)/10)*10);
	u=(((num%100)%10)*100);
	num=c+d+u;
	printf("O numero invertido eh o %d\n",num);
	
	return 0;
}

