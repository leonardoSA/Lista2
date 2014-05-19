#include <stdio.h>

int main()
{
	float sal,dezp,novsal;
	
	printf("digite numeros\n");
	scanf("%f",&sal);
	dezp=sal/10;
	novsal=(sal+((dezp*2)+(dezp/2)));
	
	printf("O NOVO SALARIO EH: %.2f\n",novsal);
	
	
	return 0;
}
