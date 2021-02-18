//ERICK DAVID CARDENAS SILVA
#ifndef _ARBOL_H_
#define _ARBOL_H_

typedef struct Tienda{ 
	int dia; 							// Variable que contendra el dia en el que se introducen los datos
	
	int numRef; 				//En este array guardamos los numeros de referencia
		/*
		for(int i=0; i < productos; i++)
		{
			numRef[i]=i+1;
		}//con el for de arriba, asignamos un valor a cada uno empezando desde 1
		*/
	char nomProduct[30]; 			//Variable que guarda los nombres de los productos 
		
		/*for(int a = 0; a < productos; a++)
		{
			nomProduct[a] = argv[a+2];
		}//con el for de arriba, asiganamos los nombres a una posicion del puntero a array nomProduct
	`	*/
	
	char  nomProveedor[30]; 		//Variable que guarda los nombres de las variables
	float PrecioCompra; 			//Variable que guarda, los precios a los que has comprado el producto
	float PrecioVenta ; 			//Variable que guarda, los precios a los que se vende el producto
	int   productosVendidos;			//Variable que guarda la cantidad de productos vendidos por producto
	char productYproveedor[35];
}Tienda_t;
void SalidaDatos(Tienda_t *Tienda, int productos, int contDia);
Tienda_t IntroducirDatos(int contProduct, int contDia);
void AnadirGuion(Tienda_t *Tienda, int contProduct);
void OrdenarAlfabeticamente(Tienda_t *Tienda, int productos);
float Ganancia(Tienda_t *Tienda, int productos);

#endif
