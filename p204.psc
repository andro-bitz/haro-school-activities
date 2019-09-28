Algoritmo p204
	Escribir "Por favor ingresa el sueldo del empleado: "
	Leer ingreso
	Si ingreso < 10000 Entonces
		impuesto <- ingreso * 0.02
		neto <- ingreso - impuesto
		Escribir "Salario: $" ingreso
		Escribir "Impuesto: $" impuesto
		Escribir "Salario neto: $ " neto
	FinSi
	Si ingreso >= 10000 Entonces
		impuesto <- ingreso * 0.045
		neto <- ingreso - impuesto
		Escribir "Salario: $" ingreso
		Escribir "Impuesto: $" impuesto
		Escribir "Salario neto: $ " neto
	FinSi
FinAlgoritmo
