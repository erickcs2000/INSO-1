//ERICK DAVID CARDENAS SILVA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tema4.h"

int main (int argc, char* argv[])
{
	Tienda_t *Tienda = NULL;
	
	int productos = atoi(argv[1]); 		// Sacamos el numero de productos introducidos 
	Tienda = (Tienda_t*)malloc(productos*sizeof(Tienda_t*));		//Asigamos memoria dinamica
	int contDia = 0;		//Variable para llevar el numero de dias
	
	for(int contProduct = 0; contProduct < productos; contProduct++)		//Bucle para crear los datos de los productos y crear su variante de nombre con ___ y proveedor
	{
		
		Tienda[contProduct] = IntroducirDatos(contProduct, contDia); 	//asignamos el conjunto de variables a un conjunto del array de conjuntos
		AnadirGuion(Tienda,contProduct);
	}
	int door = 0; 		//Variable a modo de bool
	float profit = 0;		//Variable que cuenta los beneficios del dia
	while( door == 0)		//Bucle para poder recorrer varias veces p elegir distintas opciones
	{	//Asignamos las opciones
		printf("selecciona una opcion.\n");
		printf("1 - Ver los productos.\n");
		printf("2 - Ordenar los productos alfabeticamente\n");
		printf("3 - Ensenar beneficios del dia\n");
		printf("4 - Salir\n");
		
		int opcion = 0;		//Creamos variable para elegir
		scanf("%i", &opcion);
		fflush(stdin);
		
		switch (opcion)
		{
			case 1:
				SalidaDatos(Tienda, productos, contDia);
				break;
				
			case 2:
				OrdenarAlfabeticamente(Tienda, productos);
				break;
			case 3:
				profit = Ganancia(Tienda, productos);
				printf("Los beneficios del dia son %f\n", profit);
				break;
			case 4:
				door++;
				break;
			default:
				printf("Caracter no valido, elige uno valido\n");
		}
	}
	
}