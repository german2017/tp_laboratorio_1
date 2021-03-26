/*
 ============================================================================
 Name        : Biblio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;

	do
	{
		printf("1. Alta usuario\n");
		printf("2. Baja usuario\n");
		printf("3. Modificar usuario\n");
		printf("4. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)//int - char
		{
			case 1:
				printf("Ingreso a la opcion ALTAS\n");
			break;
			case 2:
				printf("Ingreso a la opcion BAJAS\n");
			break;
			case 3:
				printf("Ingreso a la opcion MODIFICAR\n");
			break;
			case 4:
				printf("GRACIAS POR USAR NUESTRO PROGRAMA\n");
			break;
		}

	}while(opcion!=4);



	return EXIT_SUCCESS;
}
