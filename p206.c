#include<stdio.h>

void main()
{
	int err, hora, hora2, minutos, minutos2;
	printf("**Este programa devuelve la hora mas un minuto**\n");
	printf("Ingresa la hora: \n");
	scanf("%d",&hora);
	if (hora<=23) 
	{
		hora2 = hora+01;
		if (hora2==24) 
		{
			hora2 = 00;
		}
	} 
	else
       	{
		printf("ERROR\n");
		err = 1;
	}

	printf("Ingresa los minutos: \n");
	scanf("%d",&minutos);

	if (minutos<=59) {
		minutos2 = minutos+01;
		if (minutos2==60) {
			minutos2 = 00;
		}
	} 
	else
       	{
		printf("ERROR\n");
		err = 1;
	}
	if (err==1) {
		printf("ERROR\n");
	} 
	else 
	{
		printf("Introduciste %d:%d\n",hora,minutos);
		printf("En un minuto la hora sera %d:%d\n",hora2,minutos2);
	}
}

