/*
 ============================================================================
 Name        : trabajoPracticoNumero01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnTP.h"//aca esta mi biblioteca

int main(void) {

	setbuf(stdout,NULL);
	//aca inicializo las variables que voy a usar en el main
	int numeroA = 0;
	int numeroB = 0;
	int banderaOperadorA = 0;
	int banderaOperadorB = 0;
	int menuOpciones;
	int suma;
	int resta;
	int multiplicacion;
	int division;
	int banderaDividir = 0;
	int resultadoDivision ;
	int respuestaUsuario = 0;
	int resuladoFactorialUno ;
	int resuladoFactorialDos ;
	int estadoFactorial ;

	//genero un bucle
	//para poder ir mostrando las opciones , hacer las operaciones , mostrarlas ,
	//todo depende que opcion quiera el Usuario
	while (respuestaUsuario == 0)
	{
		/*estas son las opciones que puede elegir el usuario , sino elige algunas de estas
		 * opciones se le dara aviso que la opcion que eligio no es valida*/
		printf("\nSelecciones una opcion:");
		printf("\n1- para Ingresar el primer numero:");
		printf("\n2- para Ingresar el segundo numero:");
		printf("\n3- para calcular las operaciones ");
		printf("\n4- informar resultados");
		printf("\n5- para salir");
		printf("\n------------------------------------------");
		/*le voy mostrando al usuario cuales numeros escogio por le momento*/
		printf("\n Los numero ingresados son %i y %i ", numeroA, numeroB);
		/*le digo que ingrese alguna de las opciones */
		printf("\n Ingrese un opcion :");
		scanf("%d", &menuOpciones);/*la variable menuOpciones me va a indicar que opcion eligio el usuario*/
/*para saber que opcion eligio el usuario cree un swich
 * y dependiendo de los la opcion que elijio el usuario va a entrar a algun caso */
		switch (menuOpciones)
		{
			case 1://este caso pide el primer numero
			{
				numeroA = getNumero("\nIngrese primer numero :");
				banderaOperadorA = 1;
				break;
			}
			case 2://este caso pide el segundo numero
			{
				numeroB = getNumero("\nIngrese segundo numero :");
				banderaOperadorB = 1;
				break;

			}
			case 3://estecaso se encarga de hacer las operaciones y mostrar si hay algun error
			{

				if (banderaOperadorA == 1 && banderaOperadorB == 1) {
					suma = getSuma(numeroA, numeroB);
					resta = getResta(numeroA, numeroB);
					multiplicacion = getMultiplicacion(numeroA, numeroB);
					estadoFactorial = getFactorial(numeroA , numeroB, &resuladoFactorialUno , &resuladoFactorialDos);
					division = getDivision(numeroA, numeroB , &resultadoDivision);
					if(division != 1)
					{
						division = resultadoDivision;
					}else{
						printf("\nERROR con el segundo numero no es divisible !!\n");
						banderaDividir = 1;
					}
					printf("\nYa se realizaron todos los calculos \n");
				}
				else
				{
					printf("\nALERTA uno de los operadores no cumple con lo que se le pide\n");
				}
				break;

			}
			case 4://este caso se encarga de mostrar los resultados
			{
				printf("\n El resultado de la suma es : %d", suma);
				printf("\n El resultado de la resta es : %d", resta);
				if(banderaDividir == 0)
				{
					printf("\n El resultado de la division es : %d", division);
				}else{
					printf("\n NO es posible dividir por cero ");
				}
				printf("\n El resultado de la multiplicacion es : %d",multiplicacion);
				printf("\n El factorial de A es : %d y el factorial de B es : %d",resuladoFactorialUno,resuladoFactorialDos);
				printf("\n--------------------------------------------------------------------");
				break;

			}//calcular el factorial y subirlo a git
			case 5 ://este caso se encarga de terminar el programa
			{
				respuestaUsuario = 1 ;
				printf("\nfin");
				break ;

			}
			default :// este defaul se encarga de avisar si la opcion que eligio el usuario no es valida
			{
				printf("\nOpcion no valida");
				break;
			}
		}

	}

	return EXIT_SUCCESS;
}
