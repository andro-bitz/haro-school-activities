Algoritmo p201
	
	Escribir "Ingresa la clave H para hombre o cualquier otro dato para mujer:"
	hombres <- 0
	mujeres <- 0
	x <- "m"
	Leer x
	Si x="H" Entonces
		hombres <- hombres + 1 
	SiNo
		mujeres = mujeres + 1
	Fin Si
	Leer x
	Si x="H" Entonces
		hombres <- hombres + 1 
	SiNo
		mujeres = mujeres + 1
	Fin Si
	Leer x
	Si x="H" Entonces
		hombres <- hombres + 1 
	SiNo
		mujeres = mujeres + 1
	Fin Si
	Escribir "Hombres: " hombres
	Escribir "Mujeres: " mujeres
FinAlgoritmo
