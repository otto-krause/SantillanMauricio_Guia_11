#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	float homb, muj;
	printf("hombres:\n");
	scanf("%f",&homb);
	printf("mujeres:\n");
	scanf("%f",&muj);
	homb=homb*100/(homb+muj);
	muj=100-homb;
	printf("el porcentaje de hombres es de un %f, y el de mujeres es de un %f\n",homb,muj);
}

int main()
{	
	printf("ingrese la cantidad de:\n");
	calculo();
	return 0;
}
