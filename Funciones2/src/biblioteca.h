/*
 * biblioteca.h
 *
 *  Created on: 21 dic. 2020
 *      Author: gisel
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

//----------------------CALCULOS-----------------------------------------------------------------
/** funcion dividir
 * recibe un puntero resultado
 * recibe primer operando
 * recibe segundo operando
 */
int getDivision(float *pResultado,int operador1,int operador2);
/**funcion suma
 * recibe un puntero resultado
 * recibe primer operando
 * recibe segundo operando
 */
int getSuma(float *pResultado,int operador1,int operador2);
/**funcion resta
 * recibe un puntero resultado
 * recibe primer operando
 * recibe segundo operando
 */
int getResta(float *pResultado,int operador1,int operador2);

/**funcion multiplicacion
 * recibe un puntero resultado
 * recibe primer operando
 * recibe segundo operando
 */
int getmultiplicacion(float *pResultado,int operador1,int operador2);

//------------------------GET----------------------------------------

/**  Función para pedir un número entero  por consola
	* pResultado: Puntero a variable donde se escribirá el valor ingresado en el caso de ser correcto.
	* mensaje: Puntero a cadena de caracteres con mensaje a imprimir antes de pedirle al usuario datos por consola.
	* mensajeError: Puntero a cadena de caracteres con mensaje de error en el caso de que el dato ingresado no sea válido.
	*minimo: Valor mínimo admitido (inclusive)
	* maximo: Valor máximo admitido (inclusive)
	* reintentos: Cantidad de veces que se le volverá a pedir al usuario que ingrese un dato en caso de error.

 */
int get_NumeroInt(int * pResultado,char * mensaje, char * mensajeError,int minimo,int maximo,int reintentos);

/**  Función para pedir un número flotante  por consola
	* pResultado: Puntero a variable donde se escribirá el valor ingresado en el caso de ser correcto.
	* mensaje: Puntero a cadena de caracteres con mensaje a imprimir antes de pedirle al usuario datos por consola.
	* mensajeError: Puntero a cadena de caracteres con mensaje de error en el caso de que el dato ingresado no sea válido.
	*minimo: Valor mínimo admitido (inclusive)
	* maximo: Valor máximo admitido (inclusive)
	* reintentos: Cantidad de veces que se le volverá a pedir al usuario que ingrese un dato en caso de error.

 */

int get_NumeroFloat(float * pResultado,char * mensaje, char * mensajeError,float minimo,float maximo,int reintentos);

/**  Función para pedir una letra por consola
	* pResultado: Puntero a variable donde se escribirá el valor ingresado en el caso de ser correcto.
	* mensaje: Puntero a cadena de caracteres con mensaje a imprimir antes de pedirle al usuario datos por consola.
	* mensajeError: Puntero a cadena de caracteres con mensaje de error en el caso de que el dato ingresado no sea válido.
	*minimo: Valor mínimo admitido (inclusive)
	* maximo: Valor máximo admitido (inclusive)
	* reintentos: Cantidad de veces que se le volverá a pedir al usuario que ingrese un dato en caso de error.

 */

int get_Char(char * pResultado,char * mensaje, char * mensajeError,char minimo,char maximo,int reintentos);

//-----------------------------------------------------------------------------------------------------


#endif /* BIBLIOTECA_H_ */
