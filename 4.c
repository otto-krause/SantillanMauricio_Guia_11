#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	float super, fuerza, presion;
	printf("superficie:\n");
	scanf("%f",&super);
	printf("fuerza:\n");
	scanf("%f",&fuerza);
	presion=fuerza/super;
	printf("la presion es %f",presion);
}

int main()
{	
	printf("introduzca los valores:\n");
	calculo();
	return 0;
}
