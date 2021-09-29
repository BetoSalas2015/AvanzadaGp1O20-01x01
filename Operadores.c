//  Sesi�n 19 - 29/09/2021

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
	ptrJuanito = &Juanito;		// Guardamos la direcci�n de memoria de la variable Juanito en la variable ptrJuanito
	ptrJuanito -> edad = 40;
	strcpy(ptrJuanito->nombre, "Pedrito L�pez");
	PRINT1(s, ptrJuanito->nombre);
	PRINT1(d, ptrJuanito->edad);
}

void unarios()
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

	// Operadores Mas unario ( + ) y Menos Unario ( - ) - Unario
	a = +3;
	b = -3;
	PRINT2(d, a, b);
	PRINT2(+d, a, b);

	//  Operador Complemento a uno ( ~ )
	a = 7;
	PRINT2(d, a, ~a);

	// Operadores Incremento ( ++ ) y decremento ( -- )
	a = 10;
	a++;
	PRINT1(d, a);
	a = 10;
	a--;
	PRINT1(d, a);

	a = 10;
	++a;
	PRINT1(d, a);
	a = 10;
	--a;
	PRINT1(d, a);

	a = 10;
	PRINT1(d, a++);
	PRINT1(d, a);
	a = 10;
	PRINT1(d, ++a);
	PRINT1(d, a);

	a = 5; b = 5;
	PRINT1(d, a++ + b );
	PRINT2(d, a, b);

	a = 5; b = 5;
	PRINT1(d, a++ + ++b );
	PRINT1(d, a + b );
	PRINT2(d, a, b);

	//  Operador direcci�n -de memoria- ( & )
	ptrJuanito = &Juanito;		// Guardamos la direcci�n de memoria de la variable Juanito en la variable ptrJuanito

	a = 30;
	ptr = &a;
	printf("La variable a esta en la direcci�n de memoria %p y guarda el valor %d \n", &a, a);
	printf("La variable ptr esta en la direcci�n de memoria %p y guarda el valor %p \n", &ptr, ptr);
	printf("El contenido de ptr es: %d\n", *ptr);

	//  Operador indirecci�n -contenido de- ( * ) - unaria
	*ptr = 50;
	printf("La variable a esta en la direcci�n de memoria %p y guarda el valor %d \n", &a, a);
	printf("La variable ptr esta en la direcci�n de memoria %p y guarda el valor %p \n", &ptr, ptr);
	printf("El contenido de ptr es: %d\n", *ptr);

	// Operador tama�o de...  ( sizeof )
	printf("El tama�o del tipo de dato char es %d bytes\n", sizeof( char ));
	printf("El tama�o del tipo de dato int es %d bytes\n", sizeof( int ));
	printf("El tama�o del tipo de dato float es %d bytes\n", sizeof( float ));
	printf("El tama�o del tipo de dato double es %d bytes\n", sizeof( double ));
	printf("La estructura Persona ocupa %d bytes\n", sizeof( struct Persona ));
	printf("El apuntador a estructura Persona ocupa %d bytes\n", sizeof( ptrJuanito));
	printf("un aputador a int ocupa %d bytes\n", sizeof( ptr ));

	//  Operador cast  ( (t�po de dato) )
	//  promoci�n de tipos (impl�cita)
	car = 'a';
	a = car;			//  char => int
	e = a;				//  int => float
	h = e;				//  float => double

	e = h;				//  float <= double (p�rdida de datos)
	a = e;				//  int <= float	(p�rdida de datos)
	car = a;			//  char <= int		(p�rdida de datos)

	//  conversi�n explicita de tipos
	car = 'a';
	a = (int) car;				//  char => int
	e = (float) a;				//  int => float
	h = (double) e;				//  float => double
}
int main()
{
	// Jerarqu�a nivel 3 - Operadores Multiplicativos
	// Operador multiplicaci�n ( * ) - Binario
	PRINT1(d, 5 * 2);

	// Operador divisi�n ( / ) 
	//  Divisi�jn entera:    entero / entero = entero
	PRINT1(d, 5 / 2);

	//  Divisi�n flotante
	PRINT1(f, 5.0 / 9 * (80 - 32) );
	PRINT1(f, 5 / 9.0 * (80 - 32) );
	PRINT1(f, 5.0 / 9.0 * (80 - 32) );

	PRINT1(f, (float) 5 / 2);

	system("pause");
	return 0;
}