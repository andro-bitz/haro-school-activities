#include <stdio.h>

void main() {
	float exa1, exa2, exa3, prom;
	printf("Este programa eval�a el promedio de tres ex�menes\n");
	printf("Ingresa la calificaci�n del primer ex�men: \n");
	scanf("%f",&exa1);
	printf("Ingresa la calificaci�n del segundo ex�men: \n");
	scanf("%f",&exa2);
	printf("Ingresa la calificaci�n del tercer ex�men: \n");
	scanf("%f",&exa3);
	prom = (exa1+exa2+exa3)/3;
	if (prom >= 6)
       	{
		printf("* * * * * * * * * * * * * * * * * * *\n");
		printf("*El promedio %.1f es aprobatorio :D  *\n",prom);
		printf("* * * * * * * * * * * * * * * * * * *\n");
	} else {

		printf("* * * * * * * * * * * * * * * * * * *\n");
		printf("*El promedio %.1f es reprobatorio D: *\n",prom);
		printf("* * * * * * * * * * * * * * * * * * *\n");
	}
}

