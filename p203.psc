Algoritmo p203
	Escribir "Instrucciones: Si dados<=7 usted pierde $5. Si dados>=8 usted gana $5 "
	Escribir "Por favor ingrese el dinero que ha traido al casino: "
	Leer dinero
	dinero1 <- dinero
	
	Escribir "Ingrese el digito que han tirado los dados: "
	Leer dado
	
	Si dado<=7 y dado>1 Entonces
		dinero = dinero - 5
	FinSi
	
	Si dado >= 8 y dado<13 Entonces
		dinero = dinero + 5
	FinSi
	
	Si dado = 1 Entonces
		Escribir "Los dados solo pueden tirar entre 2 y 12!"
	FinSi
	
	Si dado > 12 Entonces
		Escribir "Los dados solo pueden tirar entre 2 y 12!"
	FinSi
	
	Escribir "Dinero inicial: $" dinero1
	Escribir "Dinero final: $" dinero
	
FinAlgoritmo
