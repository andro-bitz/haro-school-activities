#include<stdio.h>

void main() 
{
	float dado;
	float dinero;
	float dinero1;
	printf("Instrucciones: Si dados<=7 pierde $5. Si dados>=8 gana $5 \n");
	printf("Por favor ingrese el dinero que ha traido al casino: \n");
	scanf("%f",&dinero);
	dinero1 = dinero;
	printf("Ingrese el digito que han tirado los dados: \n");
	scanf("%f",&dado);
/*******************************************************/
	if (dado<=7 && dado>1) 
	{
		dinero = dinero-5;
	}
	if (dado>=8 && dado<13) 
	{
		dinero = dinero+5;
	}
	if (dado==1) 
	{
		printf("Los dados solo pueden tirar entre 2 y 12!\n");
	}
	if (dado>12) 
	{
		printf("Los dados solo pueden tirar entre 2 y 12!\n");
	}
/*******************************************************/
	printf("* * * * * * * * * * * * *\n");
	printf("* Dinero inicial: $%.1f  *\n",dinero1);
	printf("* Dinero final: $%.1f   *\n",dinero);
	printf("* * * * * * * * * * * * *\n");
}

