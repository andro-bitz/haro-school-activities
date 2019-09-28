#include <stdio.h>
#include <string.h>

void main() 
{
	float calorias;
	int gene;
	float peso;
	char sexo[25];
	printf("***Este programa determina el número de calorías necesarias***\n");
	printf("Escribe masculino o femenino segun tu género: \n");
	scanf("%s",sexo);
	printf("Ahora ingresa tu peso en kilogramos: \n");
	scanf("%f",&peso);
	gene = 0;
	if (strcmp(sexo,"masculino")==0) 
	{
		gene = 1;
	}
	if (strcmp(sexo,"femenino")==0) 
	{
		gene = 2;
	}
	
	switch (gene) 
	{
	case 1:
		calorias = (peso * 2.2) * 18;
		printf("* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("Sexo: %s \n", sexo);
		printf("Peso: %.2f \n", peso);
		printf("Calorias necesarias: %.2f\n",calorias);
		break;
	case 2:
		calorias = (peso * 2.2) * 16;
		printf("* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("Sexo: %s \n", sexo);
		printf("Peso: %.2f \n", peso);
		printf("Calorias necesarias: %.2f \n",calorias);
		break;
	default:
		printf("Ingresaste un valor no valido\n");
		break;
	}
}

