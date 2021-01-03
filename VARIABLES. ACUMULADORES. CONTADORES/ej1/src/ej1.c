/*
 ============================================================================
 Name        : ej1.c
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

int getPromedio( int acumulador,int cantidad,float *respuesta);
int main(void) {
	setbuf(stdout,NULL);
	int numero;
	int acumulador=0;
	float promedio;
	float respuesta;
	for(int i =0; i <=4 ;i++){
		printf("ingrese un numero: \n");
		fflush(stdin);
		scanf("%d",&numero);

		acumulador=acumulador+numero;
	}
	printf("%d \n",acumulador);

	promedio= getPromedio(acumulador,5,&respuesta);
	printf("el promedio es %.2f \n",respuesta);

	return 0;
}


int getPromedio( int acumulador,int cantidad,float *respuesta){
 int itsOK=-1;
 float aux;
 	if(cantidad<0){
 		aux=(float) acumulador/(float)cantidad;
 		aux=*respuesta;
 		itsOK=0;


 	}

  return itsOK;
}
