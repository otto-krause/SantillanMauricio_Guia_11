#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	float num;
	scanf("%f",&num);
	num=num/8;
	printf("la octava parte del numero introducido es %f",num);
}

int main()
{	
	printf("introduzca el numero cuya octava parte desea conocer:\n");
	calculo();
	return 0;
}
