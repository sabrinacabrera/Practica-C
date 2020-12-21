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
