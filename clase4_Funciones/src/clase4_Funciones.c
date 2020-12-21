/*
 ============================================================================
 Name        : clase4_Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "biblioteca.h"



int main(void) {
	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("ingrese numero uno \n");
	scanf("%d",&numero1);

	printf("ingrese numero dos \n");
	scanf("%d",&numero2);

	respuesta= getDivision(&resultado,numero1,numero2);
	if (respuesta==0){
		printf("el resultado es %.2f \n",resultado);
	}else {
		printf("no se pudo realizar la operacion\n");
	}
	return EXIT_SUCCESS;
}





