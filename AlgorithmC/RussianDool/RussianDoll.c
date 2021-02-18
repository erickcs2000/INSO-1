#include<stdio.h>
#include<stdlib.h>
int maxEnvelopes(int** envelopes, int envelopesSize, int envelopesColSize);
int main(){
    int **Hola;
    Hola = (int**)malloc(sizeof(int*)*5);
    for(int i = 0; i < 5; i++){
        Hola[i] = malloc(sizeof(int)*2);
    }

    Hola[0][0] = 2; 
    Hola[0][1] = 3;

    Hola[1][0] = 5; 
    Hola[1][1] = 3;

    Hola[2][0] = 2; 
    Hola[2][1] = 6;

    Hola[3][0] = 9; 
    Hola[3][1] = 9;

    Hola[4][0] = 8; 
    Hola[4][1] = 4;


    // [2,3]   [5,3]  [2,6]  [3,3]  [8,4]
    int sizeFilas = sizeof(Hola[0])/ (sizeof(int));
    int sizeColumnas = 5;//(sizeof(Hola))/ (sizeof(int)/2);
    //printf("%d\t%d\n",sizeFilas, sizeColumnas);

    int maximo = maxEnvelopes(Hola, sizeFilas, sizeColumnas);
    printf("%d",maximo);
}

int maxEnvelopes(int** envelopes, int envelopesSize, int envelopesColSize){
    int Max = 0;
    int counter = 0;
    int contFilCol = 0;
    int fila = 0;

    for (int Columna = 0; Columna < envelopesColSize; Columna++)
    {
        for( int ColumnaRival = 0; ColumnaRival < envelopesColSize; ColumnaRival++)
        {
            if(Columna != ColumnaRival)
            {
                for( int filaRival = 0; filaRival < envelopesSize; filaRival++)
                {
                    
                        if(envelopes[Columna][fila] < envelopes[ColumnaRival][filaRival])
                        {
                            contFilCol++;
                            
                            

                            
                        }
                    printf("%d\t%d\tcont = %d\n",envelopes[Columna][fila],envelopes[ColumnaRival][filaRival], contFilCol);
                    fila++;

                    

                } 
            }

           fila = 0;
           if(contFilCol == envelopesSize)
            {
                counter++;
            }
            contFilCol = 0;

        }

        if(counter > Max){
            Max = counter;
        }
         counter = 0;
         printf("\n\n\n");   
         
        
        
    }
    return Max;
    
}