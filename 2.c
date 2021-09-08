#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	int a, b, area, perim;
	scanf("%d",&a);
	scanf("%d",&b);
	area=a*b;
	perim=(2*a)+(2*b);
	printf("el area del rectangulo es %d, y el perimetro es %d\n",area,perim);
}

int main()
{	
	printf("introduzca los lados del triangulo cuyo perimetro y area desea conocer\n");
	calculo();
	return 0;
}
