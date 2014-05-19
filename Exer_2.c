#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&num);
	printf("O ANTECESSOR DO NUMERO EH: %d\nO SUCESSOR EH: %d\n", num-1, num+1);
	
	return 0;
}

