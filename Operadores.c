//  Sesi�n 16 22/09/2021

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

void bases()
{
	// Bases  numericas en C
	//  %d = signed int
	//  %u = unsigned int
	//  %o = base 8
	//  %x o %X = base 16
	a = 179;			//  Base 10
	printf("179 en base 10 es %o base 8.\n", a);
	printf("179 en base 10 es %X base 16.\n", a);

	a = 0263;			//  Base 8
	printf("263 en base 8 es %d base 10.\n", a);
	printf("263 en base 8 es %X base 16.\n", a);

	a = 0xB3;			//  Base 16
	printf("B3 en base 16 es %d base 10.\n", a);
	printf("B3 en base 16 es %o base 8.\n", a);
}

void primarios()
{
	// Jerarqu�a Nivel 1 - Primarios
	// Llamada a funci�n  ( ) 
	bases(); 

	PRINT1(f, 5.0/9.0 * 80 - 32 );
	PRINT1(f, 5.0/9.0 * (80 - 32) );
	PRINT1(d, 2 + ((3 * 5) - 6) );
	PRINT1(d, 2 + (3 * (5 - 6)) );

	// Operador Indice de arreglo  [ ] 
	Arreglo[7] = 2000;

	//  Operador Punto (estructuras)  ( . )
	Juanito.edad = 30;
	strcpy(Juanito.nombre, "Juanito Perez");
	PRINT1(s, Juanito.nombre);
	PRINT1(d, Juanito.edad);

	// Operador flecha (estructuras) ( -> )
	ptrJuanito = &Juanito;
	ptrJuanito -> edad = 40;
	strcpy(ptrJuanito->nombre, "Pedrito L�pez");
	PRINT1(s, ptrJuanito->nombre);
	PRINT1(d, ptrJuanito->edad);
}

int main()
{
	// Jerarqu�a nivel 2 - Operadores Unarios
	
	// En C, lo unico que es falso es 0, lo dem�s es verdadero
	a = 0;
	if(a)
		printf("Es es verdadero!\n");
	else
		printf("Esto es falso!\n");
	a = 1;
	if(a)
		printf("Es es verdadero!\n");
	else
		printf("Esto es falso!\n");

	// Operador Negaci�n  ( ! )
	a = 0;
	PRINT2(d, a, !a);
	a = 1;
	PRINT2(d, a, !a);
	a = 0;
	PRINT2(d, a, !!!!!!!!!!!!!!!!a);


	system("pause");
	return 0;
}