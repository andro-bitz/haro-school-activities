#include <stdio.h>

void main() {
	float exa1, exa2, exa3, prom;
	printf("Este programa evalúa el promedio de tres exámenes\n");
	printf("Ingresa la calificación del primer exámen: \n");
	scanf("%f",&exa1);
	printf("Ingresa la calificación del segundo exámen: \n");
	scanf("%f",&exa2);
	printf("Ingresa la calificación del tercer exámen: \n");
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

