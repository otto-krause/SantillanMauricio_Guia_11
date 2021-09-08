#include <stdio.h>
#include <stdlib.h>

void calculo()
{
	int R1, R2, R3, R4, R5, RT;
	printf("resistencia 1: ");
	scanf("%d",&R1);
	printf("resistencia 2: ");
	scanf("%d",&R2);
	printf("resistencia 3: ");
	scanf("%d",&R3);
	printf("resistencia 4: ");
	scanf("%d",&R4);
	printf("resistencia 5: ");
	scanf("%d",&R5);
	RT=R1+R2+R3+R4+R5;
	printf("\nlos valores de las resistencias son, en orden: %d, %d, %d, %d, %d, y la resistencia total es %d",R1,R2,R3,R4,R5,RT);
	
}

int main()
{	
	printf("introduzca los valores de las resistencias:\n");
	calculo();
	return 0;
}
