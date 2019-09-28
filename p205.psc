Algoritmo p205
	
	Escribir "***Este programa determina el número de calorías necesarias***"
	Escribir "Escribe masculino o femenino segun tu género: "
	Leer sexo
	Escribir "Ahora ingresa tu peso en kilogramos: "
	Leer peso
	gene <- 0
	
	Si sexo == "masculino" Entonces
		gene <- 1
	FinSi
	
	Si sexo == "femenino"
		gene <- 2	
	FinSi
	
	Segun gene Hacer
		1:
			calorias = (peso * 2.2) * 18
			Escribir "Calorias necesarias para un hombre: " calorias
		2:
			calorias = (peso * 2.2) * 16
			Escribir "Calorias necesarias para una mujer: " calorias
		De Otro Modo:
			Escribir "Inresaste un valor no valido"
	Fin Segun
	
FinAlgoritmo
