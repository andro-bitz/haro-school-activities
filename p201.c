#include <stdio.h>
#include <string.h>

void main()
{
	int  hombres;
	int mujeres;
	char x[15];
	printf("*************************************************************************\n");
	printf("Ingresa la primer clave; H para hombre, cualquier otro dato para mujer:\n");
	hombres = 0;
	mujeres = 0;
	x == "m";
	scanf("%s",x);
	if (x == "H") {
		hombres = hombres+1;
	} else {
		mujeres = mujeres+1;
	}

	printf("Ingresa la segunda clave; H para hombre, cualquier otro dato para mujer:\n");
	scanf("%s",x);
	if (x == "H") {
		hombres = hombres+1;
	} else {
		mujeres = mujeres+1;
	}

	printf("Ingresa la tercer clave; H para hombre, cualquier otro dato para mujer:\n");
	scanf("%s",x);
	if (x == "H") {
		hombres = hombres+1;
	} else {
		mujeres = mujeres+1;
	}

	printf("*************************************************************************\n");

	printf("* * * * * * * *\n");
	printf("* Hombres: %d  *\n",hombres);
	printf("* Mujeres: %d  *\n",mujeres);
	printf("* * * * * * * *\n");
}

