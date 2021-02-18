//ERICK DAVID CARDENAS SILVA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tema4.h"

float Ganancia(Tienda_t *Tienda, int productos)		//Variable que calcula la ganancia
{
	float diferencia;		//float que saca la diferencia entre el precio de compra y el de venta
	float total;			//Float que guarda el beneficio
	for(int cont = 0; cont < productos; cont++)		//Bucle que saca los beneficios de cada producto y los va sumado
	{
		diferencia = Tienda[cont].PrecioVenta - Tienda[cont].PrecioCompra; //Acumulamos la diferencia del producto
		
		total = total + (diferencia * Tienda[cont].productosVendidos);	   //Sumamos el beneficio al beneficio que habia acumulado
		
	}
	return total;		//Devolvemos el total para recibirlo en el main
}
void OrdenarAlfabeticamente(Tienda_t *Tienda, int productos)	//Funcion que ordena alfabeticamente los productos
{
	char *temp;				//Variable temporal para almacenar el string productYproveedor
	int temRef;				//Variable temporal para almacenar el numero de referencia de cada producto
	int temPrecioCompra;	//Variable temporal para almacenar el Precio de compra de cada producto
	int temPrecioVenta;		//Variable temporal para almacenar el Precio de venta de cada producto
	int temVendidos;		//Variable temporal para almacenar el numero de productos vendidos de cada producto
	
	int i, j;				//Variables creadas para recorrer los distintos strings productYproveedor
	
	for (i = 0; i < productos; i++)		//Bucle para comparar el orden alfabetico del string productYproveedor
		for(j = i+1; j < productos; j++)	//Excepcion para que si es el ultimo pare
			if(strcmp(Tienda[i].productYproveedor, Tienda[j].productYproveedor) > 0)	//Comparacion del "valor" alfabetico
			{
				temp = Tienda[i].productYproveedor;				//Guardamos la variable productYproveedor en temp
				strcpy(Tienda[i].productYproveedor,Tienda[j].productYproveedor);	//Asignamos el valor del valor del array de strings Tienda[j].productYproveedor a Tienda[i].productYproveedor
				strcpy(Tienda[j].productYproveedor, temp);		//Guardamos la variable temp en Tienda[j].productYproveedor
				 
				temRef = Tienda[i].numRef;						//Guardamos la variable productYproveedor en temRef
				Tienda[i].numRef = Tienda[j].numRef;			//Asignamos el valor del valor del array de strings Tienda[j].numRef a Tienda[i].numRef
				Tienda[j].numRef = temRef;						//Guardamos la variable temRef en Tienda[j].numRef
				
				temPrecioCompra = Tienda[i].PrecioCompra;		//Guardamos la variable productYproveedor en temPrecioCompra
				Tienda[i].PrecioCompra = Tienda[j].PrecioCompra;//Asignamos el valor del valor del array de strings Tienda[j].PrecioCompra a Tienda[i].PrecioCompra
				Tienda[j].PrecioCompra = temPrecioCompra;		//Guardamos la variable temPrecioCompra en Tienda[j].PrecioCompra
				
				temPrecioVenta = Tienda[i].PrecioVenta;			//Guardamos la variable productYproveedor en temPrecioVenta
				Tienda[i].PrecioVenta = Tienda[j].PrecioVenta;	//Asignamos el valor del valor del array de strings Tienda[j].PrecioVenta a Tienda[i].PrecioVenta
				Tienda[j].PrecioVenta = temPrecioVenta;			//Guardamos la variable temPrecioVenta en Tienda[j].PrecioVenta
				
				temVendidos = Tienda[i].productosVendidos;		//Guardamos la variable productYproveedor en temVendidos
				Tienda[i].productosVendidos = Tienda[j].productosVendidos;//Asignamos el valor del valor del array de strings Tienda[j].productosVendidos a Tienda[i].productosVendidos
				Tienda[j].productosVendidos = temVendidos;		//Guardamos la variable temVendidos en Tienda[j].productosVendidos
				
				
			}
	for( i = 0; i < productos; i++)
		
		{
			printf("%s\n", Tienda[i].productYproveedor);
			printf("Numero de referencia: %d\n",Tienda[i].numRef);
			printf("Precio de compra: %f\n",Tienda[i].PrecioCompra);
			printf("precio de venta: %f\n",Tienda[i].PrecioVenta);
			printf("Productos vendidos: %d\n",Tienda[i].productosVendidos);
		}
	
	
}

void AnadirGuion(Tienda_t *Tienda, int contProduct)		//Funcion que anade los guiones bajos y los 3 primeros caracteres del proveedor al nombre del producto
{
	stpcpy(Tienda[contProduct].productYproveedor, Tienda[contProduct].nomProduct);			//Copiamos el nombre del producto en el nuevo string
	strcat(Tienda[contProduct].productYproveedor, "___");									//Anadimos ___ al nuevo string
	strncat(Tienda[contProduct].productYproveedor, Tienda[contProduct].nomProveedor, 3);	//Anadimos los 3 primeros caracteres del nombre del proveedor al nuevo string
}

Tienda_t IntroducirDatos(int contProduct, int contDia)		//Funcion que hace introducir los datos al usuario
{
	Tienda_t Tienda; 	//creamos un conjunto de variables
	
	if(contProduct == 0) 	//creamos una excepcion para solo pedir una vez el dia
		{
			printf("introduce el dia en forma jacobiana\n");	//pedimos el dia
			scanf("%d", &contDia);								//guardamos el valor del dia en contDia
			Tienda.dia = contDia;								//Se lo asignamos a Tienda.dia
		}
		
	
	printf("introduce el nombre del producto : \n");			//pedimos el nombre del producto
	scanf("%s", &Tienda.nomProduct);							//guardamos el valor del nombre del producto
	fflush(stdin);
	
	
	
	printf("introduce el nombre del proveedor del producto : %s\n",Tienda.nomProduct);	//pedimos el nombre del proveedor
	scanf("%s",&Tienda.nomProveedor);													//guardamos el valor del nombre del proveedor
	fflush(stdin);
		
	
	printf("introduce el precio de compra del producto: %s\n",Tienda.nomProduct);		//pedimos el precio de compra
	scanf("%f",&Tienda.PrecioCompra);													//guardamos el valor del precio de compra
	fflush(stdin);
	
	printf("introduce el precio de venta del producto: %s\n",Tienda.nomProduct);		//pedimos el precio de venta
	scanf("%f",&Tienda.PrecioVenta);													//guardamos el valor del precio de venta
	fflush(stdin);
	
	printf("introduce la cantidad de productos que has vendido de: %s\n",Tienda.nomProduct);	//pedimos el numero de productos vendidos
	scanf("%d",&Tienda.productosVendidos);														//guardamos el valor del numero de productos vendidos
	fflush(stdin);
	
		
	Tienda.numRef = contProduct+1;	//Le asiganmos un numero de referencia
	
	return Tienda;	//Devolvemos el conjunto de variables que hemos creado
	
}

void SalidaDatos(Tienda_t *Tienda, int productos, int contDia)		//Funcion que imprime los Datos de todos los productos
{
	int contProduct = 0;
	printf("Dia: %d\n", Tienda[contDia].dia); //Imprimmos el dia solo una vez
	for(int contProduct = 0; contProduct < productos; contProduct++) //Se crea un bucle que pasa por todos los datos de todos los productos, ensenandolos
	{
		printf("Nombre: %s\n",Tienda[contProduct].nomProduct);
		printf("Numero de referencia: %d\n",Tienda[contProduct].numRef);
		printf("Nombre del proveedor: %s\n",Tienda[contProduct].nomProveedor);
		printf("Precio de compra: %f\n",Tienda[contProduct].PrecioCompra);
		printf("precio de venta: %f\n",Tienda[contProduct].PrecioVenta);
		printf("Productos vendidos: %d\n",Tienda[contProduct].productosVendidos);
	}
}
