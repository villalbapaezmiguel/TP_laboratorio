/*
 * utnTP.c
 *
 *  Created on: 21 sep. 2021
 *      Author: miguel
 */
#include <stdio.h>
#include <stdlib.h>

//la funcion getSuma
int getSuma(int numUno , int numDos )//esta funcion se encarga de sumar A + B y devuelve un producto C
{
	int suma ;
	suma = numUno + numDos ;

	return suma  ;

}
int getResta(int numUno , int numDos )//esta funcion se encarga de restar A + B y devuelve un producto C
{
	int resta ;
	resta = numUno - numDos ;

	return resta  ;

}
int getDivision(int numUno , int numDos , float *resultado)//esta funcion se encarga de dividir A + B y devuelve un producto C
{
	int estado ;

	if(numDos != 0)
	{
		*resultado = numUno / numDos ;
		estado = 0;
	}else {
		estado = 1;
	}



	return estado  ;

}

int getMultiplicacion(int numUno , int numDos )//esta funcion se encarga de multiplicar A + B y devuelve un producto C
{
	int multiplicar ;
	multiplicar = numUno * numDos ;

	return multiplicar  ;

}
int getNumero (char mensaje[])//esta se encarga de la toma de numeros del usuario
{
	int numero;
	printf("%s",mensaje);
	scanf("%d",&numero);
	return numero;


}
int getFactorial(int numUno , int numDos , int *resultadoUNo , int *resultadoDos)// esta funcion se encarga de factorizar los valores A y B y devuelve sus productos
{
	int i , index = 1 ;
	int factorialUno , factorialDos  = 1;
	int estado  = 0;
	for(i = 1 ; i <= numUno ; i++)
	{
		factorialUno = factorialUno * i;
		 *resultadoUNo = factorialUno ;
	}
	for(index = 1 ; index <= numDos ; index++)
	{
		factorialDos = factorialDos * index;
		 *resultadoDos = factorialDos;
	}

	return estado;

}

