/*
 * biblioteca.c
 *
 *  Created on: 21 dic. 2020
 *      Author: gisel
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

//------------------CALCULOS--------------------------------------------

int getDivision(float *pResultado,int operador1,int operador2){
	int todoOK=-1;
	float resultado;

	if(pResultado!= NULL && operador2!=0 ){
		resultado=(float)operador1/operador2;
		*pResultado=resultado;
		todoOK=0;
	}

	return todoOK;
}


int getSuma(float *pResultado,int operador1,int operador2){
	int todoOK=-1;
	float resultado;
	if(pResultado!= NULL ){
		resultado=(float)operador1+operador2;
		*pResultado=resultado;
		todoOK=0;
	}
	return todoOK;
}

int getResta(float *pResultado,int operador1,int operador2){
	int todoOK=-1;
	float resultado;
	if(pResultado !=NULL){
		resultado=(float)operador1-operador2;
		*pResultado=resultado;
		todoOK=0;
	}
	return todoOK;
}


int getmultiplicacion(float *pResultado,int operador1,int operador2){
	int todoOK=-1;
	float resultado;

	if(pResultado!= NULL && operador2!=0 && operador1!=0 ){
		resultado=(float)operador1*operador2;
		*pResultado=resultado;
		todoOK=0;
	}
	return todoOK;
}

//-------------------------GET----------------------------------------------

int get_NumeroInt(int * pResultado,char * mensaje, char * mensajeError,int minimo,int maximo,int reintentos){
	int todoOK=-1; //si hay error devuelve -1
	int bufferInt; //auxiliar

	//verifico que ninguno de los punteros sea nulo o que los datos sean razonables
	 if(pResultado !=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	 {
		do{
			 printf("%s",mensaje); //imprimo mensaje
			 fflush(stdin);
			 scanf("%d",&bufferInt); //guardo provisoriamente en el aux

			 //valido que el dato se encuentre entre max y min
			 if(bufferInt >=minimo && bufferInt <=maximo)
			 {
				 *pResultado=bufferInt; // si entra acá todo OK entonces paso bufferInt a pResultado
				  todoOK=0; //cambio el resultado del retorno todoOK

				  break; //si es todo ok se rompe el loop

			 }else{
				 printf("%s",mensajeError); //si entra acá se imprime mensaje de error
				 reintentos --; //si hay error decrementa un reintento
			 }
		}while(reintentos>=0); //se pide según los reintentos
	 }
	return todoOK;
}




int get_NumeroFloat(float * pResultado,char * mensaje, char * mensajeError,float minimo,float maximo,int reintentos){
	int todoOK=-1; //si hay error devuelve -1
	float bufferFloat; //auxiliar

	//verifico que ninguno de los punteros sea nulo o que los datos sean razonables
	 if(pResultado !=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	 {
		do{
			 printf("%s",mensaje); //imprimo mensaje
			 fflush(stdin);
			 scanf("%f",&bufferFloat); //guardo provisoriamente en el aux

			 //valido que el dato se encuentre entre max y min
			 if(bufferFloat >=minimo && bufferFloat <=maximo)
			 {
				 *pResultado=bufferFloat; // si entra acá todo OK entonces paso bufferInt a pResultado
				  todoOK=0; //cambio el resultado del retorno todoOK

				  break; //si es todo ok se rompe el loop

			 }else{
				 printf("%s",mensajeError); //si entra acá se imprime mensaje de error
				 reintentos --; //si hay error decrementa un reintento
			 }
		}while(reintentos>=0); //se pide según los reintentos
	 }

	 int get_Char(char* pResultado,char * mensaje, char * mensajeError,char minimo,char maximo,int reintentos){
	 	int todoOK=-1; //si hay error devuelve -1
	 	char bufferChar; //auxiliar

	 	//verifico que ninguno de los punteros sea nulo o que los datos sean razonables
	 	 if(pResultado !=NULL && mensaje !=NULL && mensajeError != NULL && minimo<=maximo && reintentos >=0)
	 	 {
	 		do{
	 			 printf("%s",mensaje); //imprimo mensaje
	 			 fflush(stdin);
	 			 scanf("%c",&bufferChar); //guardo provisoriamente en el aux

	 			 //valido que el dato se encuentre entre max y min
	 			 if(bufferChar >=minimo && bufferChar <=maximo)
	 			 {
	 				 *pResultado=bufferChar; // si entra acá todo OK entonces paso bufferInt a pResultado
	 				  todoOK=0; //cambio el resultado del retorno todoOK

	 				  break; //si es todo ok se rompe el loop

	 			 }else{
	 				 printf("%s",mensajeError); //si entra acá se imprime mensaje de error
	 				 reintentos --; //si hay error decrementa un reintento


	 			 }
	 		}while(reintentos>=0); //se pide según los reintentos
	 	 }
	 	return todoOK;
	 }

	return todoOK;
}

