//ERICK DAVID CARDENAS SILVA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct Tablero{
	int Tamano;
	char **Plantilla;
	int contRayas;
	int door;
	int doorTamano;
	int doorVictoria;
}Tablero_T;

Tablero_T CrearTablero()
{
	Tablero_T tablero;
	printf("Selecciona el tamano del tablero(3 = 3x3, 4 = 4x4, 5 = 5x5...)\n");
	scanf("%d",&tablero.Tamano);
	
	tablero.Plantilla = (char**)malloc(tablero.Tamano*sizeof(char*));
	for(int i = 0; i <= tablero.Tamano; i++)
	{
		tablero.Plantilla[i] = (char*)malloc(tablero.Tamano*sizeof(char));
	}
	tablero.doorTamano++;
	return(tablero);
}

void Jugada_VS_IA(Tablero_T tablero)
{
	int fila;
	int columna;
	
//--------------------------Empieza el jugador-------------------------//
	printf("%d\n",tablero.door);
	if(tablero.door == 1)
	{
	//----------------------Turno Del Jugador----------------------//
		do
		{
			printf("Elige la casilla donde quieres poner tu ficha\n");
			printf("Columna: ");
			scanf("%d",&columna);
			printf("Fila: ");
			scanf("%d",&fila);
			tablero.Plantilla[columna-1][fila-1] = 'X';
		}while(tablero.Plantilla[columna][fila] == 'X' || tablero.Plantilla[columna][fila] == 'O');
		//Imprimimos el tablero
		for(int i = 0; i < tablero.Tamano; i++)
		{
			for(int j = 0; j < tablero.Tamano; j++)
			{
				printf("%c\t",tablero.Plantilla[i][j]);
			}
			printf("\n\n");
		}
	//----------------------Turno Del Rival----------------------//
		printf("Turno del Rival:\n");
		do
		{
			columna = (rand()%tablero.Tamano);
			fila = (rand()%tablero.Tamano);
		}while(tablero.Plantilla[columna][fila] == 'X');
		tablero.Plantilla[columna][fila] = 'O';
		
		//Imprimimos el tablero
		for(int i = 0; i < tablero.Tamano; i++)
		{
			for(int j = 0; j < tablero.Tamano; j++)
			{
				printf("%c\t",tablero.Plantilla[i][j]);
				
			}
			printf("\n\n");
		}
		
	}
	
	if(tablero.door == 0)
	{
	//----------------------Turno Del Rival----------------------//
		printf("Turno del Rival:\n");
		do
		{
			columna = (rand()%tablero.Tamano);
			fila = (rand()%tablero.Tamano);
		}while(tablero.Plantilla[columna][fila] == 'X' || tablero.Plantilla[columna][fila] == 'O');
		tablero.Plantilla[columna][fila] = 'O';
		
		//Imprimimos el tablero
		for(int i = 0; i < tablero.Tamano; i++)
		{
			for(int j = 0; j < tablero.Tamano; j++)
			{
				printf("%c\t",tablero.Plantilla[i][j]);
				
			}
			printf("\n\n");
		}
	//----------------------Turno Del Jugador----------------------//
		do
		{
			printf("Elige la casilla donde quieres poner tu ficha\n");
			printf("Columna: ");
			scanf("%d",&columna);
			printf("Fila: ");
			scanf("%d",&fila);
		}while(tablero.Plantilla[columna][fila] == 'X' || tablero.Plantilla[columna][fila] == 'O');
		tablero.Plantilla[columna-1][fila-1] = 'X';
		
		//Imprimimos el tablero
		for(int i = 0; i < tablero.Tamano; i++)
		{
			for(int j = 0; j < tablero.Tamano; j++)
			{
				printf("%c\t",tablero.Plantilla[i][j]);
			}
			printf("\n\n");
		}
		
	}
	
	
}

int ComprobadorVictoria(Tablero_T tablero, int victoria)
{
	//----------------------Victoria Del Jugador----------------------//
	//Columnas
	if (tablero.doorVictoria == 0)
	{
		if(tablero.Plantilla[0][0] == 'X'&& tablero.Plantilla[1][0] == 'X' && tablero.Plantilla[2][0] == 'X'|| //Primera columna de X
		   tablero.Plantilla[0][1] == 'X'&& tablero.Plantilla[1][1] == 'X' && tablero.Plantilla[2][1] == 'X'|| //Segunda columna de X
		   tablero.Plantilla[0][2] == 'X'&& tablero.Plantilla[1][2] == 'X' && tablero.Plantilla[2][2] == 'X')  //Tercera columna de X
		{
			printf("Felicidades, HAS GANADO");
			victoria++;
		}
		
		//Filas
		if(tablero.Plantilla[0][0] == 'X'&& tablero.Plantilla[0][1] == 'X' && tablero.Plantilla[0][2] == 'X'|| //Primera fila de X
		   tablero.Plantilla[1][0] == 'X'&& tablero.Plantilla[1][1] == 'X' && tablero.Plantilla[1][2] == 'X'|| //Segunda fila de X
		   tablero.Plantilla[2][0] == 'X'&& tablero.Plantilla[2][1] == 'X' && tablero.Plantilla[2][2] == 'X')  //Tercera fila de X
		{
			printf("Felicidades, HAS GANADO\n");
			victoria++;
		}
		
		//Diagonales
		if(tablero.Plantilla[0][0] == 'X'&& tablero.Plantilla[1][1] == 'X' && tablero.Plantilla[2][2] == 'X'|| //Primera diagonal de X
		   tablero.Plantilla[0][2] == 'X'&& tablero.Plantilla[1][1] == 'X' && tablero.Plantilla[2][0] == 'X') //Segunda diagonal de X
		{
			printf("Felicidades, HAS GANADO\n");
			victoria++;
		}
		
		
		//----------------------Victoria De La IA----------------------//
		
		//Columnas
		if(tablero.Plantilla[0][0] == 'O'&& tablero.Plantilla[1][0] == 'O' && tablero.Plantilla[2][0] == 'O'|| //Primera columna de O
		   tablero.Plantilla[0][1] == 'O'&& tablero.Plantilla[1][1] == 'O' && tablero.Plantilla[2][1] == 'O'|| //Segunda columna de O
		   tablero.Plantilla[0][2] == 'O'&& tablero.Plantilla[1][2] == 'O' && tablero.Plantilla[2][2] == 'O')  //Tercera columna de O
		{
			printf("Lo siento, HAS PERDIDO\n");
			victoria++;
		}
		
		//Filas
		if(tablero.Plantilla[0][0] == 'O'&& tablero.Plantilla[0][1] == 'O' && tablero.Plantilla[0][2] == 'O'|| //Primera fila de O
		   tablero.Plantilla[1][0] == 'O'&& tablero.Plantilla[1][1] == 'O' && tablero.Plantilla[1][2] == 'O'|| //Segunda fila de O
		   tablero.Plantilla[2][0] == 'O'&& tablero.Plantilla[2][1] == 'O' && tablero.Plantilla[2][2] == 'O')  //Tercera fila de O
		{
			printf("Lo siento, HAS PERDIDO\n");
			victoria++;
		}
		
		//Diagonales
		if(tablero.Plantilla[0][0] == 'O'&& tablero.Plantilla[1][1] == 'O' && tablero.Plantilla[2][2] == 'O'|| //Primera diagonal de O
		   tablero.Plantilla[0][2] == 'O'&& tablero.Plantilla[1][1] == 'O' && tablero.Plantilla[2][0] == 'O') //Segunda diagonal de O
		{
			printf("Lo siento, HAS PERDIDO\n");
			victoria++;
		}
	}
	
	return(victoria);
}

int caraOcruz(Tablero_T tablero)
{
	srand(time(NULL));
	
	int Eleccion;
	int key;
	
	key = ((rand() %2)+1);
	printf("%d\n",key);
	printf("Elige cara o cruz(1.Cara || 2.Cruz)\n");
	scanf("%d",&Eleccion);
	if(Eleccion == key)
	{
		tablero.door++;
		printf("%d\n",tablero.door);
		printf("Has acertado juegas primero\n");
	}
	else{
		tablero.door;
		printf("Has fallado juegas segundo\n");
		printf("%d\n",tablero.door);
	}
	return(tablero.door);
}


int main(int argc, char* argv[])
{
	Tablero_T tablero;
	int doorMenu = 0;
	int victoria = 0;
	
	
	while(doorMenu == 0)
	{
		printf("selecciona una opcion.\n");
		printf("1 - Asignar un tamano al tablero\n");
		printf("2 - Jugar vs IA\n");
		printf("3 - Salir\n");
		//Creamos variable para elegir
		int opcion = 0;		
		scanf("%i", &opcion);
		
	//----------------------Cargamos el juego----------------------//
		switch (opcion)
		{
			case 1:
	//----------------------Selecionamos el Tamano del Tablero----------------------//
				tablero = CrearTablero();
				break;
				
			case 2:
	//----------------------Cargamos el juego----------------------//
				if(tablero.doorTamano == 0)
				{
					printf("Error primero elige un tamano de tablero");
				}
				else
				{
					tablero.door = caraOcruz(tablero);
					while(victoria == 0)
					{
						Jugada_VS_IA(tablero);
						victoria = ComprobadorVictoria(tablero, victoria);
					}
				}
				break;
			
			case 3:
				doorMenu++;
				break;
				
			default:
				printf("Caracter no valido, elige uno valido\n");
		}
		
		
		
	}
	
	
	
	
}