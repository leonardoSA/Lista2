#include <stdio.h>

int main()
{
	int cat,cat2,hipo;
	
	printf("digite os catetos\n");
	scanf("%d",&cat);
	scanf("%d",&cat2);
	hipo=((cat*cat)+(cat2*cat2));
	
	printf("A HIPOTENUSA EH: %d\n",hipo);
	
	
	return 0;
}
