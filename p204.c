#include <stdio.h>
void main ()
{
	float ingreso, impuesto, neto;
	printf("Por favor ingresa el sueldo del empleado: ");
	scanf("%f", &ingreso);
	if (ingreso  < 10000)
	{
		impuesto = ingreso * 0.02;
		neto = ingreso - impuesto;
		printf("Salario: %.2f\n", ingreso);
		printf("Impuesto: %.2f\n", impuesto);
		printf("Salario neto: %.2f\n", neto);
	}
	if (ingreso >= 10000)
	{		
		impuesto = ingreso * 0.045;
		neto = ingreso - impuesto;
		printf("Salario: %.2f\n", ingreso);
		printf("Impuesto: %.2f\n", impuesto);
		printf("Salario neto: %.2f\n", neto);
	}
}
