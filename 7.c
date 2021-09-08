#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	int a, b;
	printf("el primer numero:\n");
	scanf("%d",&a);
	printf("el segundo numero:\n");
	scanf("%d",&b);
	if (a>b)
	{
		printf("el numero %d es mayor a %d",a,b);
	}
	else
	{
		if (a<b)
		{
			printf("el numero %d es mayor a %d",b,a);
		}
		else
		{
			printf("los numeros %d y %d son iguales",a,b);
		}
	}
	
}

int main()
{	
	printf("introduzca:\n");
	calculo();
	return 0;
}
