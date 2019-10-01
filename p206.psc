Algoritmo p105
	Escribir "**Este programa devuelve la hora mas un minuto**";
	Escribir "Ingresa la hora: ";
	Leer hora;
	Si hora <=23 Entonces
		hora2 <- hora + 01;
		Si hora2 == 24 Entonces
			hora2 = 00;
		FinSi
	SiNo
		Escribir "ERROR";
	FinSi
	
	Escribir "Ingresa los minutos: ";
	Leer minutos;
	Si minutos <= 59 Entonces
		minutos2 = minutos + 01 ;
		Si minutos2 == 60 Entonces
			minutos2 = 00;
		FinSi
	SiNo
		Escribir "ERROR";
	FinSi
	Escribir "Introduciste " hora ":" minutos;
	Escribir "En un minuto la hora sera " hora2 ":" minutos2;
FinAlgoritmo
